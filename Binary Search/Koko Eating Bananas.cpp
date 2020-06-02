class Solution {
public:
   class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int lo = 1, hi = pow(10, 9);
        while (lo < hi) {
            int mi = lo + (hi - lo) / 2;
            if (!possible(piles, H, mi))
                lo = mi + 1;
            else
                hi = mi;
        }

        return lo;
    }

    bool possible(vector<int>& piles, int H, int K) {
        int time = 0;
        for (int p: piles)
            time += (p - 1) / K + 1;
        return time <= H;
    }
};
};
