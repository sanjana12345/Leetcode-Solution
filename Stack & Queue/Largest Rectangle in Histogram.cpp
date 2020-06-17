class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
      int n=heights.size();stack<int> s; int maxarea = 0; int tp;  int area,i = 0; 
    while (i < n) 
    { 
        if (s.empty() || heights[s.top()] <= heights[i]) 
            s.push(i++); 
         else
        { 
            tp = s.top(); 
            s.pop();  
            area = heights[tp] * (s.empty() ? i :  i - s.top() - 1);  
             if(maxarea < area) 
                  maxarea = area; 
        } 
    } 
   while (s.empty() == false) 
    { 
        tp = s.top(); 
        s.pop(); 
        area = heights[tp] * (s.empty() ? i :  
                                i - s.top() - 1); 
  
        if (maxarea < area) 
            maxarea = area; 
    } 
  
    return maxarea; 

        
    }
};
