class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)
            return 1;
       if (n == 0)
            return 1;
        long long int res = 9;
        vector<int> dpTable(n + 1, 0);
        dpTable[1] = 10;
        for (int i = 2; i <= n; i++) {
            res *= (10 - i + 1);
            dpTable[i] = dpTable[i - 1] + res;
        }
        return dpTable[n];
    }
};
