#include <vector>
#include <unordered_set>

using namespace std;


vector<int> removeDuplicates(const vector<int>& myList) {
    unordered_set<int> values;
    for(int i = 0; i < myList.size(); i++){
        values.insert(myList[i]);
    }
    return vector<int>(values.begin(), values.end());
    //   +=====================================================+
    //   |                 WRITE YOUR CODE HERE                |
    //   | Description:                                        |
    //   | - This function removes duplicate integers from a   |
    //   |   given vector 'myList'.                            |
    //   | - It uses an unordered_set for quick look-up and    |
    //   |   elimination of duplicates.                        |
    //   | - Returns a vector of unique integers.              |
    //   |                                                     |
    //   | Return type: vector<int>                            |
    //   |                                                     |
    //   | Tips:                                               |
    //   | - 'uniqueSet' stores unique numbers from 'myList'.  |
    //   | - Use 'begin()' and 'end()' to copy elements back   |
    //   |   to a vector.                                      |
    //   | - Check output from Test.cpp in "User logs".        |
    //   +=====================================================+
}