/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    stack<NestedInteger> s;
    NestedIterator(vector<NestedInteger> &nestedList) {
        push_in_stack(nestedList,s);
    }
    int next() {
        if(hasNext())
        {
            int ans = s.top().getInteger();
            s.pop();
            return ans;
        }
        return -1;
    }
    bool hasNext() {
        if(s.empty())
            return false;
        
        while(!s.empty())
        {
            if(!s.top().isInteger())
            {
                auto i = s.top().getList();
                s.pop();
                push_in_stack(i,s);
            }
            else
                return true;
        }
        return false;
    }
    void push_in_stack(vector<NestedInteger>& nestedList, stack<NestedInteger>& s)
    {
        for(int i=nestedList.size()-1;i>=0;i--)
            s.push(nestedList[i]);
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
