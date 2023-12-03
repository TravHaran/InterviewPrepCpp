#include <vector>
#include <algorithm>
#include <climits>

using namespace std;


int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int minPrice = INT32_MAX;
    for(int i = 0; i < prices.size(); i++){
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i]-minPrice);
    }
    return maxProfit;


	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function calculates the maximum profit       |
	//   |   from buying and selling a stock.                  |
	//   | - It iterates through the 'prices' array once.      |
	//   |                                                     |
	//   | Return type: int                                    |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'minPrice' keeps track of the lowest price.       |
	//   | - 'maxProfit' stores the maximum profit found.      |
	//   | - Use 'min' and 'max' functions to update values.   |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
}