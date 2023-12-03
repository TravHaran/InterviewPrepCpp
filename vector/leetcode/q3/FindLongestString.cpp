#include <string>
#include <vector>

using namespace std;


string findLongestString(vector<string>& stringList) {
    string maxString;
    for(int i = 0; i < stringList.size(); i++){
        if(stringList[i].length() > maxString.length()){
            maxString = stringList[i];
        }
    }
    return maxString;
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function finds the longest string in         |
	//   |   a given list of strings.                          |
	//   | - It uses a single loop to check the length         |
	//   |   of each string.                                   |
	//   |                                                     |
	//   | Return type: string                                 |
	//   | - Returns the longest string found in the list.     |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'longestString' keeps track of the longest        |
	//   |   string found so far.                              |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
}