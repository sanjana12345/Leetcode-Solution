class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int n=A.size();
        int prev = 0, curr, ans = 0;
    for(int i = 2; i <n; i++){
        curr = 0;
        if(A[i] - A[i-1] == A[i-1] - A[i-2]){
            curr = prev + 1;
        }
        prev = curr;
        ans = ans + curr;
    }
    return ans;  
    }
};
