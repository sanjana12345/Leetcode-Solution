class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0)
            return 0;
        int minSoFar = prices[0];
        int bestProfit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] - minSoFar > bestProfit)
                bestProfit = prices[i] - minSoFar;
            if (prices[i] < minSoFar)
                minSoFar = prices[i];
            
        }
        return bestProfit;        
    }
};
