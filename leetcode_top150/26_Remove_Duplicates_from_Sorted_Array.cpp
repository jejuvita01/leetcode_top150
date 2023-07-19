//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/18/23.
//

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        return nums.size();
    }
};
