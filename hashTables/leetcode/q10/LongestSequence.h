#include <unordered_set>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


int longestConsecutiveSequence(const vector<int>& nums) {
    int longestStreak = 0;
    int currentStreak = 0;
    // create a set to store unique numbers
    unordered_set<int> numSet(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        currentStreak = 0;
        if(!numSet.count(nums[i]-1)){ // we found the starting point of a new consecutive sequence
            int currentNum = nums[i];
            while(numSet.count(currentNum)){
                currentStreak++;
                currentNum++;
            }
        }
        longestStreak = max(longestStreak, currentStreak);
    }
    return longestStreak;
    //   +=====================================================+
    //   |                 WRITE YOUR CODE HERE                |
    //   | Description:                                        |
    //   | - This function finds the longest consecutive       |
    //   |   sequence of integers in a given array.            |
    //   | - It uses an unordered_set for quick look-up.       |
    //   | - Loop through each unique number in the set.       |
    //   | - For each number, check its sequence length.       |
    //   | - Update 'longestStreak' if a longer sequence is    |
    //   |   found.                                            |
    //   |                                                     |
    //   | Return type: int                                    |
    //   |                                                     |
    //   | Tips:                                               |
    //   | - 'numSet' stores unique numbers from 'nums'.       |
    //   | - 'longestStreak' keeps track of the longest        |
    //   |   sequence found so far.                            |
    //   | - Use 'find' method for quick look-up in set.       |
    //   | - Check output from Test.cpp in "User logs".        |
    //   +=====================================================+
}