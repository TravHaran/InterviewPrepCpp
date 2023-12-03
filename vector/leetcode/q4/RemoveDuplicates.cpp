#include <vector>

using namespace std;


int removeDuplicates(vector<int>& nums) {
    if(nums.size() < 2)
        return nums.size();
    int i = 1;
    while(i < nums.size()){
        if(nums[i]==nums[i-1])
            nums.erase(nums.begin()+i);
        else {
            i++;
        }
    }
    return nums.size();

	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function removes duplicate integers          |
	//   |   from a sorted array in-place.                     |
	//   | - It uses two pointers to achieve this.             |
	//   |                                                     |
	//   | Return type: int                                    |
	//   | - Returns the length of the new array.              |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'writePointer' is used for storing unique values. |
	//   | - 'readPointer' is used for reading array values.   |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
}