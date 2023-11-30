#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(const vector<string>& strings) {
    bool anagram_found;
    vector<vector<string>> result;
    vector<unordered_map<char, int>> anagrams;
    for(string word : strings){
        // create the character map 
        unordered_map<char, int> chars;
        for(int i = 0; i < word.length(); i++){
            if(chars.count(word[i])){
                chars[word[i]]++;
            } else {
                chars[word[i]] = 1;
            }
        }
        anagram_found = false;
        for(int i = 0; i < anagrams.size(); i++){
            if(chars == anagrams[i]){
                result[i].push_back(word);
                anagram_found = true;
                break;
            }
        }
        if(!anagram_found){
            anagrams.push_back(chars);
            result.push_back({word});
        }
    }
    return result;
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function groups anagrams from a given vector |
	//   |   of strings.                                       |
	//   | - It uses an unordered_map for organization.        |
	//   | - It sorts each string to form a canonical version. |
	//   | - Groups strings with the same canonical form.      |
	//   |                                                     |
	//   | Return type: vector<vector<string>>                 |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'anagramGroups' maps canonical strings to groups. |
	//   | - 'canonical' is a sorted version of each string.   |
	//   | - 'result' holds the final groups of anagrams.      |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
}