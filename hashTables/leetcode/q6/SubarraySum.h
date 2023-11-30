#include <unordered_map>
#include <vector>
#include <array>
#include <iostream>

using namespace std;

vector<int> subarraySum(const vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> remainders;
    int rem = target;
    int p1 = 0;
    for(int i = 0; i < nums.size(); i++){
        rem-= nums[i];
        if(rem < 0){
            remainders.erase(p1);
            p1++;
            rem = target;
            for(int j = p1; j <= i; j++){
                rem -= nums[j];
                if(rem == 0){
                    result.push_back(p1);
                    result.push_back(j);
                    return result;
                }
                remainders[j] = rem;
            }
        } else if(rem == 0){
            result.push_back(p1);
            result.push_back(i);
            return result;
        } else {
            remainders[i] = rem;
        }

    }
    return result;
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function finds a subarray in 'nums' that     |
	//   |   sums up to the given 'target'.                    |
	//   | - It uses an unordered_map for quick look-up.       |
	//   | - It returns the indices of the start and end       |
	//   |   elements of the subarray.                         |
	//   |                                                     |
	//   | Return type: vector<int>                            |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'sumIndex' stores cumulative sums and their       |
	//   |   indices.                                          |
	//   | - 'currentSum' keeps track of the sum up to index i.|
	//   | - Use 'find' method for quick look-up in map.       |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
}