#include <vector>

using namespace std;

void reverse(vector<int>& nums, int start, int end){
    while(start < end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    if(nums.empty()) return;

    k %= nums.size();
    reverse(nums, 0, nums.size() - k - 1);
    reverse(nums, nums.size() - k, nums.size() - 1);
    reverse(nums, 0, nums.size()-1);
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function rotates the array 'nums' to the     |
	//   |   right by 'k' steps.                               |
	//   | - The method used involves reversing parts of the   |
	//   |   array.                                            |
	//   |                                                     |
	//   | Return type: void                                   |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'k' is first made smaller by taking modulo size.  |
	//   | - Three reversals are done to achieve the rotation. |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
}