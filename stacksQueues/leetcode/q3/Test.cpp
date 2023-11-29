#include <iostream>
#include "ReverseString.h"

using namespace std;

void test() {
    cout << "\n----- Test: Reverse Empty String -----\n";
    {
        string input = "";
        cout << "Input: \"" << input << "\"\n";
        cout << "Output: \"" << reverseString(input) << "\" - EXPECTED: \"\"\n";
        cout << (reverseString(input) == "" ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Reverse Single Character String -----\n";
    {
        string input = "A";
        cout << "Input: \"" << input << "\"\n";
        cout << "Output: \"" << reverseString(input) << "\" - EXPECTED: \"A\"\n";
        cout << (reverseString(input) == "A" ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Reverse Two Character String -----\n";
    {
        string input = "AB";
        cout << "Input: \"" << input << "\"\n";
        cout << "Output: \"" << reverseString(input) << "\" - EXPECTED: \"BA\"\n";
        cout << (reverseString(input) == "BA" ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Reverse Multiple Character String -----\n";
    {
        string input = "Hello, World!";
        cout << "Input: \"" << input << "\"\n";
        cout << "Output: \"" << reverseString(input) << "\" - EXPECTED: \"!dlroW ,olleH\"\n";
        cout << (reverseString(input) == "!dlroW ,olleH" ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Reverse String With Whitespace -----\n";
    {
        string input = "  A B C  ";
        cout << "Input: \"" << input << "\"\n";
        cout << "Output: \"" << reverseString(input) << "\" - EXPECTED: \"  C B A  \"\n";
        cout << (reverseString(input) == "  C B A  " ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Reverse String With Special Characters -----\n";
    {
        string input = "@#$%^&*()";
        cout << "Input: \"" << input << "\"\n";
        cout << "Output: \"" << reverseString(input) << "\" - EXPECTED: \")(*&^%$#@\"\n";
        cout << (reverseString(input) == ")(*&^%$#@" ? "PASS\n" : "FAIL\n");
    }
}

int main(){
    test();
}

/* 
    EXPECTED OUTPUT:
    ----- Test: Reverse Empty String -----
    Input: ""
    Output: "" - EXPECTED: ""
    PASS
    ----- Test: Reverse Single Character String -----
    Input: "A"
    Output: "A" - EXPECTED: "A"
    PASS
    ----- Test: Reverse Two Character String -----
    Input: "AB"
    Output: "BA" - EXPECTED: "BA"
    PASS
    ----- Test: Reverse Multiple Character String -----
    Input: "Hello, World!"
    Output: "!dlroW ,olleH" - EXPECTED: "!dlroW ,olleH"
    PASS
    ----- Test: Reverse String With Whitespace -----
    Input: "  A B C  "
    Output: "  C B A  " - EXPECTED: "  C B A  "
    PASS
    ----- Test: Reverse String With Special Characters -----
    Input: "@#$%^&*()"
    Output: ")(*&^%$#@" - EXPECTED: ")(*&^%$#@"
    PASS

*/