#include <unordered_map>
#include <vector>

using namespace std;

bool itemInCommon(vector<int> vect1, vector<int> vect2) {
    unordered_map<int, bool> items;
    for(int i=0; i < vect1.size(); i++){
        items[vect1[i]]  = true;
    }
    for(int j=0; j<vect2.size(); j++){
        if(items[vect2[j]]){
            return true;
        }
    }
    return false;
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function checks if two vectors have a        |
	//   |   common element.                                   |
	//   | - It uses an unordered_map to store elements from   |
	//   |   the first vector.                                 |
	//   | - Then it checks each element from the second       |
	//   |   vector against the map.                           |
	//   |                                                     |
	//   | Return type: bool                                   |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'myMap' stores elements from 'vect1' as keys.     |
	//   | - Loop through 'vect2' and check against 'myMap'.   |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
}