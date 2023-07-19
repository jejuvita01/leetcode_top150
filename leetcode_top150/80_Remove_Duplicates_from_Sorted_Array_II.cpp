//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/19/23.
//

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev;
        int cnt = 1;

        prev = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (prev == nums[i]) {
                cnt++;
                if (cnt > 2) {
                    nums.erase(nums.begin() + i);
                    i--;
                }
            }
            else {
                prev = nums[i];
                cnt = 1;
            }
        }
        return nums.size();
    }
};
