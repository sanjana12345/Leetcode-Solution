class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
          int n=arr.size();
       if (n==0 || n==1) 
         
        return n; 
  
    // To store index of next unique element 
    int j = 0; 
  
        for (int i=0; i < n-1; i++) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n-1]; 
  
    return j; 
    }
};
