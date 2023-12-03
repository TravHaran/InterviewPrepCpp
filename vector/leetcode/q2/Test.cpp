#include <iostream>
#include <vector>
#include "FindMaxMin.cpp"

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
        cout << "\n----- Test: SingleElement -----\n";
        vector<int> nums = {5};
        vector<int> result = findMaxMin(nums);
        vector<int> expected = {5, 5};
        cout << "Input: "; printVector(nums); cout << "\n";
        cout << "Output: "; printVector(result); cout << "\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: AscendingOrder -----\n";
        vector<int> nums = {1, 2, 3, 4, 5};
        vector<int> result = findMaxMin(nums);
        vector<int> expected = {5, 1};
        cout << "Input: "; printVector(nums); cout << "\n";
        cout << "Output: "; printVector(result); cout << "\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: DescendingOrder -----\n";
        vector<int> nums = {5, 4, 3, 2, 1};
        vector<int> result = findMaxMin(nums);
        vector<int> expected = {5, 1};
        cout << "Input: "; printVector(nums); cout << "\n";
        cout << "Output: "; printVector(result); cout << "\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: RandomOrder -----\n";
        vector<int> nums = {3, 5, 1, 4, 2};
        vector<int> result = findMaxMin(nums);
        vector<int> expected = {5, 1};
        cout << "Input: "; printVector(nums); cout << "\n";
        cout << "Output: "; printVector(result); cout << "\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: AllSameElements -----\n";
        vector<int> nums = {3, 3, 3, 3, 3};
        vector<int> result = findMaxMin(nums);
        vector<int> expected = {3, 3};
        cout << "Input: "; printVector(nums); cout << "\n";
        cout << "Output: "; printVector(result); cout << "\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: PositiveAndNegative -----\n";
        vector<int> nums = {-3, 5, -1, 4, 2};
        vector<int> result = findMaxMin(nums);
        vector<int> expected = {5, -3};
        cout << "Input: "; printVector(nums); cout << "\n";
        cout << "Output: "; printVector(result); cout << "\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: OnlyNegative -----\n";
        vector<int> nums = {-3, -5, -1, -4, -2};
        vector<int> result = findMaxMin(nums);
        vector<int> expected = {-1, -5};
        cout << "Input: "; printVector(nums); cout << "\n";
        cout << "Output: "; printVector(result); cout << "\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }
}

int main(){
    test();
}