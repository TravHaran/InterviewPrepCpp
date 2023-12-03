#include <iostream>
#include <vector>
#include "MaxSubarray.cpp"

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
    // PositiveNumbersOnly
    {
        vector<int> nums = {1, 2, 3, 4, 5};
        int returnedResult = maxSubarray(nums);
        cout << "\n----- Positive Numbers Only -----\n";
        cout << "Input Vector: "; printVector(nums); cout << "\n";
        cout << "EXPECTED: 15, RETURNED: " << returnedResult << "\n";
    }

    // NegativeNumbersOnly
    {
        vector<int> nums = {-1, -2, -3, -4, -5};
        int returnedResult = maxSubarray(nums);
        cout << "\n----- Negative Numbers Only -----\n";
        cout << "Input Vector: "; printVector(nums); cout << "\n";
        cout << "EXPECTED: -1, RETURNED: " << returnedResult << "\n";
    }

    // MixOfPositiveAndNegativeNumbers
    {
        vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        int returnedResult = maxSubarray(nums);
        cout << "\n----- Mix of Positive and Negative Numbers -----\n";
        cout << "Input Vector: "; printVector(nums); cout << "\n";
        cout << "EXPECTED: 6, RETURNED: " << returnedResult << "\n";
    }

    // SingleElement
    {
        vector<int> nums = {4};
        int returnedResult = maxSubarray(nums);
        cout << "\n----- Single Element -----\n";
        cout << "Input Vector: "; printVector(nums); cout << "\n";
        cout << "EXPECTED: 4, RETURNED: " << returnedResult << "\n";
    }

    // EmptyList
    {
        vector<int> nums = {};
        int returnedResult = maxSubarray(nums);
        cout << "\n----- Empty List -----\n";
        cout << "Input Vector: "; printVector(nums); cout << "\n";
        cout << "EXPECTED: 0, RETURNED: " << returnedResult << "\n";
    }
}

int main(){
    test();
}