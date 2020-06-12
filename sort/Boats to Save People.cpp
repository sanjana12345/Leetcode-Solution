class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size();
        int cnt = 0;
        int start = 0;
        for(int i = n-1; i >=start; i--)
        {
            if(people[i] < limit && people[i]+people[start] <= limit)
                 start++;
            cnt++;
        }
        return cnt;
    
    }
};
