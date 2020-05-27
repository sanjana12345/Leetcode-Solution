class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
         int n = arr.size();
        int i = n-1, j;
        while (i >= 0 && arr[i] == 0) i--;
        if (i < 0) return;
        int z = count(arr.begin(), arr.begin() + i, 0);
        while (i + z >= n) {
            if (arr[i] == 0) z--;
            i--;
        }
        for (j = n-1; j > i; j--) arr[j] = 0;
        for (j = i + z; i >= 0; i--) {
            arr[j--] = arr[i];
            if (arr[i] == 0) arr[j--] = 0;
        }
    }
};
