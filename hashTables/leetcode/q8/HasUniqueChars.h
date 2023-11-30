#include <string>
#include <unordered_set>

using namespace std;


bool hasUniqueChars(const string& str) {
    unordered_set<char> values;
    for(int i = 0; i < str.length(); i++){
        if(values.count(str[i]))
            return false;
        else 
            values.insert(str[i]);
    }
    return true;
    //   +=====================================================+
    //   |                 WRITE YOUR CODE HERE                |
    //   | Description:                                        |
    //   | - This function checks if a string 'str' has unique |
    //   |   characters.                                       |
    //   | - It uses an unordered_set for quick look-up.       |
    //   | - It returns a boolean value.                       |
    //   |                                                     |
    //   | Return type: bool                                   |
    //   |                                                     |
    //   | Tips:                                               |
    //   | - 'charSet' stores characters we've seen.           |
    //   | - Loop through 'str' to populate 'charSet'.         |
    //   | - Use 'find' method for quick look-up in set.       |
    //   | - If a duplicate is found, return false.            |
    //   | - Check output from Test.cpp in "User logs".        |
    //   +=====================================================+
}