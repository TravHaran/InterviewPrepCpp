#include <iostream>
#include <vector>
#include "MaxProfit.cpp"

using namespace std;

void printVector(const vector<int>& nums) {
    cout << "[";
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}


void test() {
    {
        cout << "\n----- Test: IncreasingPrices -----\n";
        vector<int> prices = {1, 2, 3, 4, 5};
        cout << "Prices: "; printVector(prices); cout << "\n";
        int profit = maxProfit(prices);
        cout << "Profit: " << profit << "\n";
        cout << (profit == 4 ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: DecreasingPrices -----\n";
        vector<int> prices = {5, 4, 3, 2, 1};
        cout << "Prices: "; printVector(prices); cout << "\n";
        int profit = maxProfit(prices);
        cout << "Profit: " << profit << "\n";
        cout << (profit == 0 ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: LargeTestCase1 -----\n";
        vector<int> prices(100000, 5); // 100,000 entries all with the value 5
        cout << "Prices: (too many to print) \n"; 
        int profit = maxProfit(prices);
        cout << "Profit: " << profit << "\n";
        cout << (profit == 0 ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: LargeTestCase2 -----\n";
        vector<int> prices(100000, 5); // 100,000 entries all with the value 5
        prices[99999] = 10; // change last item to 10
        cout << "Prices: (too many to print) \n"; 
        int profit = maxProfit(prices);
        cout << "Profit: " << profit << "\n";
        cout << (profit == 5 ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: LargeTestCase3 -----\n";
        vector<int> prices(100000, 5); // 100,000 entries all with the value 5
        prices[0] = 1; // change first item to 1
        cout << "Prices: (too many to print) \n"; 
        int profit = maxProfit(prices);
        cout << "Profit: " << profit << "\n";
        cout << (profit == 4 ? "PASS\n" : "FAIL\n");
    }
}

int main(){
    test();
}