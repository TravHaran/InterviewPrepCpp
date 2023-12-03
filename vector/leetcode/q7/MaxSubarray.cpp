#include <vector>
#include <algorithm>

using namespace std;


int maxSubarray(vector<int>& nums) {
    int globalMax = INT32_MIN;
    int localMax = 0;

    for(int i = 0; i < nums.size(); i++){
        localMax = max(nums[i], nums[i]+localMax);
        if(localMax > globalMax){
            globalMax = localMax;
        }
    }
    if(globalMax==INT32_MIN)
        return 0;
    return globalMax;
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function finds the sum of the contiguous     |
	//   |   subarray with the largest sum from the given      |
	//   |   array 'nums'.                                     |
	//   | - It uses Kadane's algorithm for this task.         |
	//   |                                                     |
	//   | Return type: int                                    |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'maxSum' stores the maximum subarray sum.         |
	//   | - 'currentSum' keeps track of the sum of the        |
	//   |   subarray ending at the current index.             |
	//   | - Use 'max' to update 'maxSum' and 'currentSum'.    |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
}