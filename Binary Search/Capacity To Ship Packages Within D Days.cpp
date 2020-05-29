class Solution {
public:
   int canShip(vector<int> &weights,int day, int capacity )
    {
       int cnt=0, i=0, n=weights.size(), sum=0 ;
             while(i<n){
                if(sum+weights[i]>capacity){
                    cnt++;
                    sum=0;
                }
                 else{
                    sum+=weights[i];
                     i++;
                 }
             }
            return (++cnt);
        }
      
    
	
public:
    int shipWithinDays(vector<int>& weights, int D) {
        if( weights.size() == 0 ) 
            return 0;
        int n=weights.size();
        int l=1,r;
         for(int i=0; i<n; i++) {
            l= max(l,weights[i]);
            r += l;
        }
        while( l <= r )
        {
		   int mid = l + (r-l)/2;
            
		   if( canShip(weights,D,mid)<=D ){
                r = mid-1;
            } else {
			   l = mid+1;
            }
            
        }
        return l;
    }
};
