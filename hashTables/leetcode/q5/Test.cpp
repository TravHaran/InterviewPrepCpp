#include <iostream>
#include "TwoSum.h"
using namespace std;

void test() {
    {
        cout << "\n----- Test: Empty Input -----\n";
        vector<int> nums;
        int target = 10;
        vector<int> result = twoSum(nums, target);
        cout << "EXPECTED: No two sum solution\n";
        cout << "RETURNED: " << (result.empty() ? "No solution" : "Has solution") << "\n";
        cout << (result.empty() ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: Single Element -----\n";
        vector<int> nums{42};
        int target = 42;
        vector<int> result = twoSum(nums, target);
        cout << "EXPECTED: No two sum solution\n";
        cout << "RETURNED: " << (result.empty() ? "No solution" : "Has solution") << "\n";
        cout << (result.empty() ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: Two Elements -----\n";
        vector<int> nums{3, 4};
        int target = 7;
        vector<int> result = twoSum(nums, target);
        vector<int> expected{0, 1};
        cout << "EXPECTED: Indices (0, 1)\n";
        cout << "RETURNED: Indices (" << (result.empty() ? "" : to_string(result[0])) << ", " 
             << (result.empty() ? "" : to_string(result[1])) << ")\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: Multiple Elements -----\n";
        vector<int> nums{1, 3, 4, 2, 5};
        int target = 6;
        vector<int> result = twoSum(nums, target);
        vector<int> expected{2, 3};
        cout << "EXPECTED: Indices (2, 3)\n";
        cout << "RETURNED: Indices (" << (result.empty() ? "" : to_string(result[0])) << ", " 
             << (result.empty() ? "" : to_string(result[1])) << ")\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: No Match -----\n";
        vector<int> nums{10, 20, 30, 40};
        int target = 100;
        vector<int> result = twoSum(nums, target);
        cout << "EXPECTED: No two sum solution\n";
        cout << "RETURNED: " << (result.empty() ? "No solution" : "Has solution") << "\n";
        cout << (result.empty() ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: With Duplicates -----\n";
        vector<int> nums{3, 3, 4, 4};
        int target = 6;
        vector<int> result = twoSum(nums, target);
        vector<int> expected{0, 1};
        cout << "EXPECTED: Indices (0, 1)\n";
        cout << "RETURNED: Indices (" << (result.empty() ? "" : to_string(result[0])) << ", " 
             << (result.empty() ? "" : to_string(result[1])) << ")\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }
}

int main(){
    test();
}


/* 
    EXPECTED OUTPUT:
    ----- Test: Empty Input -----
    EXPECTED: No two sum solution
    RETURNED: No solution
    PASS
    ----- Test: Single Element -----
    EXPECTED: No two sum solution
    RETURNED: No solution
    PASS
    ----- Test: Two Elements -----
    EXPECTED: Indices (0, 1)
    RETURNED: Indices (0, 1)
    PASS
    ----- Test: Multiple Elements -----
    EXPECTED: Indices (2, 3)
    RETURNED: Indices (2, 3)
    PASS
    ----- Test: No Match -----
    EXPECTED: No two sum solution
    RETURNED: No solution
    PASS
    ----- Test: With Duplicates -----
    EXPECTED: Indices (0, 1)
    RETURNED: Indices (0, 1)
    PASS

*/

