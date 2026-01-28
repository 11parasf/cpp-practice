#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0, 20, 0, -20, 0, 20};
    // More test cases ⬇️
    //{0, 0, 3, 3, 5, 6}, {2, 2, 4, 4, 4, 4, 5, 5}

    // BRUTE FORCE

    // //Create temp array to store number in order
    // std::vector<int> nonZeroElements;

    // int n = nums.size();
    // int count = 0;

    // //Push all numbers to test
    // for (int i = 0; i < n; i++) {
    //     if (nums[i] != 0) {
    //         nonZeroElements.push_back(nums[i]);
    //     } else {
    //         count++;
    //     }
    // }

    // //Insert back temp number to test on index  0 - test.size()-1
    // for (int i = 0; i < nonZeroElements.size(); i++) {
    //     nums[i] = nonZeroElements[i];
    // }

    // //Add zeros to remaining array
    // for (int i = nonZeroElements.size(); i < n; i++) {
    //     nums[i] = 0;
    // }
    return 0;
}