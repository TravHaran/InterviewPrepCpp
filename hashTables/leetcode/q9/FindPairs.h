#include <vector>
#include <unordered_set>

using namespace std;


vector<vector<int>> findPairs(const vector<int>& arr1, const vector<int>& arr2, int target) {
    vector<vector<int>> allPairs;
    unordered_set<int> complements;
    for(int i = 0; i < arr1.size(); i++){
        complements.insert(target - arr1[i]);
    }
    for(int i = 0; i < arr2.size(); i++){
        if(complements.count(arr2[i])){
            allPairs.push_back({target-arr2[i], arr2[i]});
        }
    }
    return allPairs;
    //   +=========================================================+
    //   |                 WRITE YOUR CODE HERE                    |
    //   | Description:                                            |
    //   | - This function finds all pairs of integers from        |
    //   |   'arr1' and 'arr2' that sum up to 'target'.            |
    //   | - It uses an unordered_set for quick look-up.           |
    //   | - It returns a 2D vector containing the pairs.          |
    //   |                                                         |
    //   | Return type: vector<vector<int>>                        |
    //   |                                                         |
    //   | Tips:                                                   |
    //   | - 'mySet' stores numbers from 'arr1'.                   |
    //   | - 'pairs' will store the pairs that meet the target.    |
    //   | - Loop through 'arr1' to populate 'mySet'.              |
    //   | - Loop through 'arr2' to find pairs.                    |
    //   | - Use 'find' method for quick look-up in set.           |
    //   | - Check output from Test.cpp in "User logs".            |
    //   +=========================================================+
}