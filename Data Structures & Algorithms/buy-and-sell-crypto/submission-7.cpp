class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfits = 0;

        for(int i =0; i < prices.size(); i++)
        {
            for(int j = i+1; j < prices.size(); j++)
            {
                int Profits = prices[j] - prices[i];
                if(Profits > MaxProfits)
                {
                    MaxProfits = Profits;
                }
            }
        }
            return MaxProfits;
    }
};
