#include <iostream>
#include "SubarraySum.h"

using namespace std;

void test() {
    {
        cout << "\n----- Test: Empty Input -----\n";
        vector<int> nums;
        int target = 10;
        vector<int> result = subarraySum(nums, target);
        cout << "EXPECTED: No solution\n";
        cout << "RETURNED: " << (result.empty() ? "No solution" : "Has solution") << "\n";
        cout << (result.empty() ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: No Subarray Sum -----\n";
        vector<int> nums{1, 2, 3, 4, 5};
        int target = 100;
        vector<int> result = subarraySum(nums, target);
        cout << "EXPECTED: No solution\n";
        cout << "RETURNED: " << (result.empty() ? "No solution" : "Has solution") << "\n";
        cout << (result.empty() ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: Entire Array -----\n";
        vector<int> nums{3, 2, 5};
        int target = 10;
        vector<int> result = subarraySum(nums, target);
        vector<int> expected{0, 2};
        cout << "EXPECTED: Indices (0, 2)\n";
        cout << "RETURNED: Indices (" << (result.empty() ? "" : to_string(result[0])) << ", " 
             << (result.empty() ? "" : to_string(result[1])) << ")\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: Partial Array -----\n";
        vector<int> nums{1, 2, 3, 4, 5};
        int target = 9;
        vector<int> result = subarraySum(nums, target);
        vector<int> expected{1, 3};
        cout << "EXPECTED: Indices (1, 3)\n";
        cout << "RETURNED: Indices (" << (result.empty() ? "" : to_string(result[0])) << ", " 
             << (result.empty() ? "" : to_string(result[1])) << ")\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: Single Element -----\n";
        vector<int> nums{10};
        int target = 10;
        vector<int> result = subarraySum(nums, target);
        vector<int> expected{0, 0};
        cout << "EXPECTED: Indices (0, 0)\n";
        cout << "RETURNED: Indices (" << (result.empty() ? "" : to_string(result[0])) << ", " 
             << (result.empty() ? "" : to_string(result[1])) << ")\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: With Negative Numbers -----\n";
        vector<int> nums{1, -2, 3, 4, -5, 6};
        int target = 6;
        vector<int> result = subarraySum(nums, target);
        vector<int> expected{0, 3};
        cout << "EXPECTED: Indices (0, 3)\n";
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
    EXPECTED: No solution
    RETURNED: No solution
    PASS
    ----- Test: No Subarray Sum -----
    EXPECTED: No solution
    RETURNED: No solution
    PASS
    ----- Test: Entire Array -----
    EXPECTED: Indices (0, 2)
    RETURNED: Indices (0, 2)
    PASS
    ----- Test: Partial Array -----
    EXPECTED: Indices (1, 3)
    RETURNED: Indices (1, 3)
    PASS
    ----- Test: Single Element -----
    EXPECTED: Indices (0, 0)
    RETURNED: Indices (0, 0)
    PASS
    ----- Test: With Negative Numbers -----
    EXPECTED: Indices (0, 3)
    RETURNED: Indices (0, 3)
    PASS

*/

