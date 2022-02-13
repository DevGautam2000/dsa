#include "io/io.h"

class Solution
{

public:
    int maxProfit(vector<int> &prices)
    {
        //* TC: O(n), SC: O(n)

        vector<int> minVal(2);
        vector<int> freq;

        minVal[0] = prices[0];
        //? get the min val
        for (int i = 0; i < prices.size(); i++)
            if (minVal[0] > prices[i])
            {
                minVal[0] = prices[i];
                minVal[1] = i;
            }

        //? get the maxProfit for each stock then
        for (int i = minVal[1]; i < prices.size(); i++)
            freq.push_back(prices[i] - minVal[0]);

        int profit = freq[0];
        for (auto i : freq)
            profit = max(profit, i);

        return profit;
    }

    int maxProfitLinear(vector<int> &prices)
    {
        //*TC: O(n), SC: O(n)
        int n = prices.size();
        vector<int> aux(n);
        int maxm = prices[n - 1];
        int curr = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
        {
            maxm = max(prices[i], maxm);
            aux[i] = maxm;
        }

        for (int i = 0; i < n; i++)
        {
            curr = max(aux[i] - prices[i], curr);
            // cout << prices[i] << " " << aux[i] << " " << curr << endl;
        }

        return curr;
    }

    int maxProfitLinearTimeConstantSpace(vector<int> &prices)
    {
        int minSoFar = prices[0];
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            minSoFar = min(minSoFar, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minSoFar);
        }
        return maxProfit;
    }
} s;

int main()
{
    io();
    // vector<int> prices = {3, 1, 4, 8, 7, 2, 5};
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << " Solution: " << s.maxProfitLinearTimeConstantSpace(prices) << endl;

    return 0;
}
