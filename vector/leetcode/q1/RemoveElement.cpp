#include <vector>
using namespace std;

void removeElement(vector<int>& nums, int val) {
    int i = 0;
    int j = 0;
    while(i < nums.size()){
        if(nums[i]==val){
            j = i;
            nums.erase(nums.begin()+j);
        } else {
            i++;
        }
    }
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function removes all occurrences of a        |
	//   |   given value ('val') from an integer vector.       |
	//   | - It modifies the input vector 'nums'.              |
	//   |                                                     |
	//   | Return type: void                                   |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - Uses two pointers 'i' and 'j' for traversal.      |
	//   | - 'i' points to the last element that is not 'val'. |
	//   | - 'j' is used for iterating over the array.         |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
}