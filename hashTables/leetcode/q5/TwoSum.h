#include <unordered_map>
#include <vector>
#include <array>

using namespace std;


vector<int> twoSum(const vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> complements;
    for(int i = 0; i < nums.size(); i++){
        if(complements.count(nums[i])){
            result.push_back(complements[nums[i]]);
            result.push_back(i);
            return result;
        } else {
            complements[target-nums[i]] = i;
        }
    }
    return result;
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function finds two numbers in 'nums' that    |
	//   |   sum up to the given 'target'.                     |
	//   | - It uses an unordered_map for quick look-up.       |
	//   | - It returns the indices of the numbers that add    |
	//   |   up to the target.                                 |
	//   |                                                     |
	//   | Return type: vector<int>                            |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'numMap' stores numbers and their indices.        |
	//   | - 'complement' is the value needed to reach target. |
	//   | - Use 'find' method for quick look-up in map.       |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
}
