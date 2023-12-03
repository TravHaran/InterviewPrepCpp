#include <iostream>
#include <vector>
#include "Rotate.cpp"

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
    // BasicTestCases
    {
        cout << "\n----- Basic Test Cases -----\n";

        vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
        rotate(nums1, 2);
        cout << "EXPECTED: [6, 7, 1, 2, 3, 4, 5], RETURNED: ";
        printVector(nums1);
        cout << "\n";

        vector<int> nums2 = {1, 2, 3, 4, 5};
        rotate(nums2, 7);
        cout << "EXPECTED: [4, 5, 1, 2, 3], RETURNED: ";
        printVector(nums2);
        cout << "\n";

        vector<int> nums3 = {1, 2, 3};
        rotate(nums3, 0);
        cout << "EXPECTED: [1, 2, 3], RETURNED: ";
        printVector(nums3);
        cout << "\n";

        vector<int> nums4 = {1, 2, 3, 4, 5};
        rotate(nums4, 5);
        cout << "EXPECTED: [1, 2, 3, 4, 5], RETURNED: ";
        printVector(nums4);
        cout << "\n";
    }

    // EdgeCases
    {
        cout << "\n----- Edge Cases -----\n";

        vector<int> nums1;
        rotate(nums1, 4);
        cout << "EXPECTED: [], RETURNED: ";
        printVector(nums1);
        cout << "\n";

        vector<int> nums2 = {1};
        rotate(nums2, 3);
        cout << "EXPECTED: [1], RETURNED: ";
        printVector(nums2);
        cout << "\n";
    }

    // LargeTestCases
    {
        cout << "\n----- Large Test Cases -----\n";

        vector<int> nums(100000, 5);  // 100,000 entries all with the value 5
        nums[50000] = 10;
        rotate(nums, 50001);
        cout << "After rotation, first element: " << nums[0] << ", second element: " << nums[1] << "\n";
    }
}

int main(){
    test();
}