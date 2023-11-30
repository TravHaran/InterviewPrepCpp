#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>
#include "RemoveDuplicates.h"

using namespace std;

// Helper to print a vector
string vecToString(const vector<int>& vec) {
    string str = "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        str += to_string(vec[i]);
        if (i < vec.size() - 1) {
            str += ", ";
        }
    }
    str += "]";
    return str;
}

void test() {
    {
        cout << "SETS DO NOT MAINTAIN ORDER SO THE ORDER MAY BE DIFFERENT IN 'BEFORE' & 'AFTER' \n";
        cout << "\n----- Test: Empty Vector -----\n";
        vector<int> input = {};
        cout << "BEFORE: " << vecToString(input) << '\n';
        vector<int> output = removeDuplicates(input);
        cout << "AFTER: " << vecToString(output) << '\n';
        cout << "EXPECTED: Size 0\n";
        cout << "RETURNED: Size " << output.size() << '\n';
        cout << (output.size() == 0 ? "PASS\n" : "FAIL\n");
    }
    {
        cout << "\n----- Test: No Duplicates -----\n";
        vector<int> input = {1, 2, 3, 4};
        cout << "BEFORE: " << vecToString(input) << '\n';
        vector<int> output = removeDuplicates(input);
        cout << "AFTER: " << vecToString(output) << '\n';
        cout << "EXPECTED: Size 4\n";
        cout << "RETURNED: Size " << output.size() << '\n';
        cout << (output.size() == 4 ? "PASS\n" : "FAIL\n");
    }
    {
        cout << "\n----- Test: Duplicates -----\n";
        vector<int> input = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
        cout << "BEFORE: " << vecToString(input) << '\n';
        vector<int> output = removeDuplicates(input);
        cout << "AFTER: " << vecToString(output) << '\n';
        cout << "EXPECTED: Size 4\n";
        cout << "RETURNED: Size " << output.size() << '\n';
        cout << (output.size() == 4 ? "PASS\n" : "FAIL\n");
    }
    {
        cout << "\n----- Test: All Same Elements -----\n";
        vector<int> input = {1, 1, 1, 1, 1};
        cout << "BEFORE: " << vecToString(input) << '\n';
        vector<int> output = removeDuplicates(input);
        cout << "AFTER: " << vecToString(output) << '\n';
        cout << "EXPECTED: Size 1\n";
        cout << "RETURNED: Size " << output.size() << '\n';
        cout << (output.size() == 1 ? "PASS\n" : "FAIL\n");
    }
    {
        cout << "\n----- Test: Negative Numbers -----\n";
        vector<int> input = {-1, -2, -2, -3, -3};
        cout << "BEFORE: " << vecToString(input) << '\n';
        vector<int> output = removeDuplicates(input);
        cout << "AFTER: " << vecToString(output) << '\n';
        cout << "EXPECTED: Size 3\n";
        cout << "RETURNED: Size " << output.size() << '\n';
        cout << (output.size() == 3 ? "PASS\n" : "FAIL\n");
    }
    {
        cout << "\n----- Test: Mixed Numbers -----\n";
        vector<int> input = {1, -1, 2, -2, 3, 3};
        cout << "BEFORE: " << vecToString(input) << '\n';
        vector<int> output = removeDuplicates(input);
        cout << "AFTER: " << vecToString(output) << '\n';
        cout << "EXPECTED: Size 5\n";
        cout << "RETURNED: Size " << output.size() << '\n';
        cout << (output.size() == 5 ? "PASS\n" : "FAIL\n");
    }
    {
        cout << "\n----- Test: Large Numbers -----\n";
        vector<int> input = {1000000000, 1000000000, 2000000000};
        cout << "BEFORE: " << vecToString(input) << '\n';
        vector<int> output = removeDuplicates(input);
        cout << "AFTER: " << vecToString(output) << '\n';
        cout << "EXPECTED: Size 2\n";
        cout << "RETURNED: Size " << output.size() << '\n';
        cout << (output.size() == 2 ? "PASS\n" : "FAIL\n");
    }
}

int main(){
    test();
}