class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int MaxProfit = 0;

        for(int i = 0; i < prices.size(); i++)
        {
            for(int j = i+1; j < prices.size(); j++)
            {
                int price = prices[j] - prices[i];

                if(price > MaxProfit)
                {
                    MaxProfit = price;
                }

            }
        }

           return MaxProfit;
    }
};
