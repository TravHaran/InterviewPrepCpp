#include <iostream>
#include "FirstNonRepeatingChar.h"

using namespace std;

void test() {
    {
        cout << "\n----- Test: Empty String -----\n";
        string input;
        char result = firstNonRepeatingChar(input);
        cout << "EXPECTED: No non-repeating characters\n";
        cout << "RETURNED: " << (result == '\0' ? "No non-repeating characters" : "Character found") << "\n";
        cout << (result == '\0' ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: Single Character -----\n";
        string input = "a";
        char result = firstNonRepeatingChar(input);
        cout << "EXPECTED: 'a'\n";
        cout << "RETURNED: '" << result << "'\n";
        cout << (result == 'a' ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: All Characters Repeat -----\n";
        string input = "aabbcc";
        char result = firstNonRepeatingChar(input);
        cout << "EXPECTED: No non-repeating characters\n";
        cout << "RETURNED: " << (result == '\0' ? "No non-repeating characters" : "Character found") << "\n";
        cout << (result == '\0' ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: Some Characters Repeat -----\n";
        string input = "aabccde";
        char result = firstNonRepeatingChar(input);
        cout << "EXPECTED: 'b'\n";
        cout << "RETURNED: '" << result << "'\n";
        cout << (result == 'b' ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: No Characters Repeat -----\n";
        string input = "abcde";
        char result = firstNonRepeatingChar(input);
        cout << "EXPECTED: 'a'\n";
        cout << "RETURNED: '" << result << "'\n";
        cout << (result == 'a' ? "PASS\n" : "FAIL\n");
    }
}

int main(){
    test();
}

/* 
    EXPECTED OUTPUT:
    ----- Test: Empty String -----
    EXPECTED: No non-repeating characters
    RETURNED: No non-repeating characters
    PASS
    ----- Test: Single Character -----
    EXPECTED: 'a'
    RETURNED: 'a'
    PASS
    ----- Test: All Characters Repeat -----
    EXPECTED: No non-repeating characters
    RETURNED: No non-repeating characters
    PASS
    ----- Test: Some Characters Repeat -----
    EXPECTED: 'b'
    RETURNED: 'b'
    PASS
    ----- Test: No Characters Repeat -----
    EXPECTED: 'a'
    RETURNED: 'a'
    PASS

*/

