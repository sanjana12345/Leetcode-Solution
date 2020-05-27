class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0,deficit=0;
        int capacity=0;
   
   for(int i=0;i<gas.size();i++)
   {
       capacity+=gas[i]-cost[i];
       if(capacity<0){
           start=i+1;
           deficit+=capacity;
           capacity=0;
       }
   }
   return(capacity+deficit>=0)?start:-1;
    }
};
