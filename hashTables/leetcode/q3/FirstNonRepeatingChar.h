#include <unordered_map>
#include <string>

using namespace std;

char firstNonRepeatingChar(const string& input_string) {
    int min_index = INT32_MAX;
    unordered_map<char, int> char_index;
    for(int i = 0; i < input_string.length(); i++){
        if(char_index.count(input_string[i])){ // char is repeating
            char_index.erase(input_string[i]);
        } else {
            char_index[input_string[i]] = i;
        }
    }
    for(auto i : char_index){
        if(i.second < min_index){
            min_index = i.second;
        }
    }
    if(min_index!=INT32_MAX)
        return input_string[min_index];
    return '\0';
	//   +======================================================+
	//   |                 WRITE YOUR CODE HERE                 |
	//   | Description:                                         |
	//   | - This function finds the first non-repeating char   |
	//   |   in a given string.                                 |
	//   | - It uses an unordered_map to count char occurrences |
	//   | - Loops through the string to check counts.          |
	//   |                                                      |
	//   | Return type: char                                    |
	//   |                                                      |
	//   | Tips:                                                |
	//   | - 'charCounts' keeps track of each char's count.     |
	//   | - Loops twice: once to count, once to find answer.   |
	//   | - Returns '\0' if no non-repeating char is found.    |
	//   | - Check output from Test.cpp in "User logs".         |
	//   +======================================================+
}