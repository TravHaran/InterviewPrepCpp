#include <iostream>
#include "GroupAnagrams.h"

using namespace std;

void printGroups(const vector<vector<string>>& groups) {
    cout << "{ ";
    for (const auto& group : groups) {
        cout << "( ";
        for (const string& str : group) {
            cout << str << " ";
        }
        cout << ") ";
    }
    cout << "}\n";
}

void test() {
    {
        cout << "\n----- Test: Empty Input -----\n";
        vector<string> input;
        vector<vector<string>> result = groupAnagrams(input);
        cout << "EXPECTED: No anagrams\n";
        cout << "RETURNED: ";
        printGroups(result);
        cout << (result.empty() ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: Single Anagram Group -----\n";
        vector<string> input{"listen", "silent", "enlist"};
        vector<vector<string>> result = groupAnagrams(input);
        sort(result[0].begin(), result[0].end());
        sort(input.begin(), input.end());
        cout << "EXPECTED: ";
        printGroups({input});
        cout << "RETURNED: ";
        printGroups(result);
        cout << (result.size() == 1 && result[0] == input ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: Multiple Anagram Groups -----\n";
        vector<string> input{"listen", "silent", "dog", "god", "evil", "vile"};
        vector<vector<string>> result = groupAnagrams(input);
        for (auto& group : result) {
            sort(group.begin(), group.end());
        }
        sort(result.begin(), result.end());
        vector<vector<string>> expected{
            {"dog", "god"},
            {"evil", "vile"},
            {"listen", "silent"}
        };
        sort(expected.begin(), expected.end());
        cout << "EXPECTED: ";
        printGroups(expected);
        cout << "RETURNED: ";
        printGroups(result);
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: No Anagrams -----\n";
        vector<string> input{"cat", "bat", "rat"};
        vector<vector<string>> result = groupAnagrams(input);
        vector<vector<string>> expected;
        for (const string& str : input) {
            expected.push_back({str});
        }
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        cout << "EXPECTED: ";
        printGroups(expected);
        cout << "RETURNED: ";
        printGroups(result);
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }
}

int main(){
    test();
}

/* 
    EXPECTED OUTPUT:
    ----- Test: Empty Input -----
    EXPECTED: No anagrams
    RETURNED: { }
    PASS
    ----- Test: Single Anagram Group -----
    EXPECTED: { ( enlist listen silent ) }
    RETURNED: { ( enlist listen silent ) }
    PASS
    ----- Test: Multiple Anagram Groups -----
    EXPECTED: { ( dog god ) ( evil vile ) ( listen silent ) }
    RETURNED: { ( dog god ) ( evil vile ) ( listen silent ) }
    PASS
    ----- Test: No Anagrams -----
    EXPECTED: { ( bat ) ( cat ) ( rat ) }
    RETURNED: { ( bat ) ( cat ) ( rat ) }
    PASS

*/