#include <iostream>
#include <vector>
#include "RemoveDuplicates.cpp"

using namespace std;

void printVector(const vector<int>& nums, int newSize = -1) {
    cout << "[";
    int sizeToPrint = (newSize == -1) ? nums.size() : newSize;
    for (int i = 0; i < sizeToPrint; i++) {
        cout << nums[i];
        if (i < sizeToPrint - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}



void test() {
    {
        cout << "\n----- Test: EmptyList -----\n";
        vector<int> nums = {};
        cout << "Before: "; printVector(nums); cout << "\n";
        int newSize = removeDuplicates(nums);
        cout << "After: "; printVector(nums, newSize); cout << "\n";
        cout << (newSize == 0 && nums.empty() ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: SingleElement -----\n";
        vector<int> nums = {5};
        cout << "Before: "; printVector(nums); cout << "\n";
        int newSize = removeDuplicates(nums);
        cout << "After: "; printVector(nums, newSize); cout << "\n";
        cout << (newSize == 1 && nums[0] == 5 ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: MultipleDuplicates -----\n";
        vector<int> nums = {1, 1, 1, 2, 2, 3, 4, 4, 4};
        cout << "Before: "; printVector(nums); cout << "\n";
        int newSize = removeDuplicates(nums);
        cout << "After: "; printVector(nums, newSize); cout << "\n";
        if (newSize == 4 && nums[0] == 1 && nums[1] == 2 && nums[2] == 3 && nums[3] == 4) {
            cout << "PASS\n";
        } else {
            cout << "FAIL\n";
        }
    }

    {
        cout << "\n----- Test: NoDuplicates -----\n";
        vector<int> nums = {1, 2, 3, 4, 5};
        cout << "Before: "; printVector(nums); cout << "\n";
        int newSize = removeDuplicates(nums);
        cout << "After: "; printVector(nums, newSize); cout << "\n";
        bool pass = true;
        if (newSize != 5) {
            pass = false;
        } else {
            for (int i = 0; i < newSize; i++) {
                if (nums[i] != i + 1) {
                    pass = false;
                    break;
                }
            }
        }
        cout << (pass ? "PASS\n" : "FAIL\n");
    }
}

int main(){
    test();
}