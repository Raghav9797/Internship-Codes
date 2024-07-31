#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min = prices[0];
        int sum = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] - min > sum)
            {
                sum = prices[i] - min;
            }
            else if (prices[i] < min)
            {
                min = prices[i];
            }
        }
        return sum;
    }
};

int main()
{
    Solution s;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int result = s.maxProfit(prices);
    cout << "Max Profit: " << result << endl;
    return 0;
}
