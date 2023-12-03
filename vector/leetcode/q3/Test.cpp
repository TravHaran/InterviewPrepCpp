#include <iostream>
#include <vector>
#include <string>
#include "FindLongestString.cpp"

using namespace std;

void printVector(const vector<string>& strings) {
    cout << "[ ";
    for (const auto& str : strings) {
        cout << "\"" << str << "\" ";
    }
    cout << "]";
}


void test() {
    {
        cout << "\n----- Test: SingleString -----\n";
        vector<string> stringList = {"apple"};
        string result = findLongestString(stringList);
        string expected = "apple";
        cout << "Input: "; printVector(stringList); cout << "\n";
        cout << "Output: \"" << result << "\"\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: FirstStringIsLongest -----\n";
        vector<string> stringList = {"watermelon", "apple", "banana"};
        string result = findLongestString(stringList);
        string expected = "watermelon";
        cout << "Input: "; printVector(stringList); cout << "\n";
        cout << "Output: \"" << result << "\"\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: LastStringIsLongest -----\n";
        vector<string> stringList = {"apple", "banana", "watermelon"};
        string result = findLongestString(stringList);
        string expected = "watermelon";
        cout << "Input: "; printVector(stringList); cout << "\n";
        cout << "Output: \"" << result << "\"\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: MiddleStringIsLongest -----\n";
        vector<string> stringList = {"apple", "watermelon", "banana"};
        string result = findLongestString(stringList);
        string expected = "watermelon";
        cout << "Input: "; printVector(stringList); cout << "\n";
        cout << "Output: \"" << result << "\"\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: AllStringsSameLength -----\n";
        vector<string> stringList = {"apple", "melon", "fruit"};
        string result = findLongestString(stringList);
        string expected = "apple"; // since "apple" is the first string of that length
        cout << "Input: "; printVector(stringList); cout << "\n";
        cout << "Output: \"" << result << "\"\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: EmptyList -----\n";
        vector<string> stringList = {};
        string result = findLongestString(stringList);
        string expected = "";
        cout << "Input: "; printVector(stringList); cout << "\n";
        cout << "Output: \"" << result << "\"\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: SomeEmptyStrings -----\n";
        vector<string> stringList = {"apple", "", "banana", ""};
        string result = findLongestString(stringList);
        string expected = "banana";
        cout << "Input: "; printVector(stringList); cout << "\n";
        cout << "Output: \"" << result << "\"\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: DifferentCharacterStrings -----\n";
        vector<string> stringList = {"12345", "b@n@n@", "apple!"};
        string result = findLongestString(stringList);
        string expected = "b@n@n@";
        cout << "Input: "; printVector(stringList); cout << "\n";
        cout << "Output: \"" << result << "\"\n";
        cout << (result == expected ? "PASS\n" : "FAIL\n");
    }
}

int main(){
    test();
}