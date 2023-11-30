#include <iostream>
#include <vector>
#include "LongestSequence.h"  

using namespace std;

// Helper function to display test result
void displayResult(vector<int> nums, int expected) {
    cout << "\nInput vector: ";
    for (int num : nums) cout << num << " ";
    cout << "\nEXPECTED: Longest consecutive sequence = " << expected;
    int output = longestConsecutiveSequence(nums);
    cout << "\nRETURNED: Longest consecutive sequence = " << output;
    cout << (output == expected ? "\nPASS\n" : "\nFAIL\n");
}

void test() {
    {
        cout << "\n----- Test: Empty Vector -----\n";
        vector<int> nums = {};
        displayResult(nums, 0);
    }
    {
        cout << "\n----- Test: Single Element -----\n";
        vector<int> nums = {1};
        displayResult(nums, 1);
    }
    {
        cout << "\n----- Test: All Duplicates -----\n";
        vector<int> nums = {1, 1, 1, 1};
        displayResult(nums, 1);
    }
    {
        cout << "\n----- Test: No Sequence -----\n";
        vector<int> nums = {1, 3, 5, 7};
        displayResult(nums, 1);
    }
    {
        cout << "\n----- Test: Single Sequence -----\n";
        vector<int> nums = {1, 2, 3, 4};
        displayResult(nums, 4);
    }
    {
        cout << "\n----- Test: Multiple Sequences -----\n";
        vector<int> nums = {1, 2, 3, 10, 11, 12};
        displayResult(nums, 3);
    }
    {
        cout << "\n----- Test: Unordered Sequence -----\n";
        vector<int> nums = {4, 2, 3, 1};
        displayResult(nums, 4);
    }
    {
        cout << "\n----- Test: Negative Numbers -----\n";
        vector<int> nums = {0, -1, -2};
        displayResult(nums, 3);
    }
    {
        cout << "\n----- Test: Mixed Numbers -----\n";
        vector<int> nums = {1, 2, 0, -1};
        displayResult(nums, 4);
    }
}

int main(){
    test();
}