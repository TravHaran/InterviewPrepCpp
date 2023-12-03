#include <vector>

using namespace std;


vector<int> findMaxMin(vector<int>& myList) {
    vector<int> result;
    if(myList.empty()){
        return result;
    }
    int max = 0;
    int min = 0;
    for(int i = 0; i < myList.size(); i++){
        if(myList[max] < myList[i]){
            max = i;
        }
        if(myList[min] > myList[i]){
            min = i;
        }
    }
    return vector<int>{myList[max], myList[min]};
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function finds the maximum and minimum       |
	//   |   values in a given list of integers.               |
	//   | - It uses a single loop to go through the list.     |
	//   |                                                     |
	//   | Return type: vector<int>                            |
	//   | - Returns a vector containing maximum and minimum.  |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'maximum' and 'minimum' keep track of the         |
	//   |   highest and lowest values found.                  |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
}