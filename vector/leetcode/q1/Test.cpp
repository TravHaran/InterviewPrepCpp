#include <iostream>
#include <vector>
#include "RemoveElement.cpp"

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
        cout << "\n----- Test: EmptyVector -----\n";
        vector<int> nums;
        cout << "Before: "; printVector(nums); cout << "\n";
        removeElement(nums, 10);
        cout << "After: "; printVector(nums); cout << "\n";
        cout << (nums.empty() ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: AllElementsAreTarget -----\n";
        vector<int> nums = {10, 10, 10};
        cout << "Before: "; printVector(nums); cout << "\n";
        removeElement(nums, 10);
        cout << "After: "; printVector(nums); cout << "\n";
        cout << (nums.empty() ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: NoTargetElement -----\n";
        vector<int> nums = {1, 2, 3, 4, 5};
        vector<int> original = nums;
        cout << "Before: "; printVector(nums); cout << "\n";
        removeElement(nums, 10);
        cout << "After: "; printVector(nums); cout << "\n";
        cout << (nums == original ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: MultipleTargetElementsInterspersed -----\n";
        vector<int> nums = {1, 10, 2, 10, 3, 10, 4, 10, 5};
        vector<int> expected = {1, 2, 3, 4, 5};
        cout << "Before: "; printVector(nums); cout << "\n";
        removeElement(nums, 10);
        cout << "After: "; printVector(nums); cout << "\n";
        cout << (nums == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: TargetElementsAtBeginning -----\n";
        vector<int> nums = {10, 10, 1, 2, 3};
        vector<int> expected = {1, 2, 3};
        cout << "Before: "; printVector(nums); cout << "\n";
        removeElement(nums, 10);
        cout << "After: "; printVector(nums); cout << "\n";
        cout << (nums == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: TargetElementsAtEnd -----\n";
        vector<int> nums = {1, 2, 3, 10, 10};
        vector<int> expected = {1, 2, 3};
        cout << "Before: "; printVector(nums); cout << "\n";
        removeElement(nums, 10);
        cout << "After: "; printVector(nums); cout << "\n";
        cout << (nums == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: SingleTargetElement -----\n";
        vector<int> nums = {1, 2, 3, 10, 4, 5};
        vector<int> expected = {1, 2, 3, 4, 5};
        cout << "Before: "; printVector(nums); cout << "\n";
        removeElement(nums, 10);
        cout << "After: "; printVector(nums); cout << "\n";
        cout << (nums == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: SingleElementTarget -----\n";
        vector<int> nums = {10};
        cout << "Before: "; printVector(nums); cout << "\n";
        removeElement(nums, 10);
        cout << "After: "; printVector(nums); cout << "\n";
        cout << (nums.empty() ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: SingleElementNotTarget -----\n";
        vector<int> nums = {1};
        vector<int> original = nums;
        cout << "Before: "; printVector(nums); cout << "\n";
        removeElement(nums, 10);
        cout << "After: "; printVector(nums); cout << "\n";
        cout << (nums == original ? "PASS\n" : "FAIL\n");
    }
}

int main(){
    test();
}


