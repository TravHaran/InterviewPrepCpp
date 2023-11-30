#include <unordered_map>
#include <vector>

using namespace std;

vector<int> findDuplicates(const vector<int>& nums) {
    vector<int> duplicates;
    unordered_map<int, bool> items;
    for(int i = 0; i < nums.size(); i++){
        if(items[nums[i]]){
            duplicates.push_back(nums[i]);
        } else {
            items[nums[i]] = true;
        }
    }
    return duplicates;
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function finds duplicate integers in a given |
	//   |   vector.                                           |
	//   | - It uses an unordered_map to count each integer's  |
	//   |   occurrences.                                      |
	//   | - Loops through the map to find duplicates.         |
	//   |                                                     |
	//   | Return type: vector<int>                            |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'numCounts' keeps track of each integer's count.  |
	//   | - 'duplicates' stores duplicate integers found.     |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
}