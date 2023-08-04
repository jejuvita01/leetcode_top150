//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 8/4/23.
//

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        return nums[nums.size() - k];
    }
};
