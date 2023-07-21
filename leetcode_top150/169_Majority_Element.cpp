//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/21/23.
//

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int prev;
        int repeat;
        int max;
        int answer;

        sort(nums.begin(), nums.end());

        prev = nums[0];
        repeat = 1;
        max = 0;
        for (int i = 1;i < nums.size(); i++) {
            if (prev == nums[i]) {
                repeat++;
            }
            else {
                if (repeat > max) {
                    max = repeat;
                    answer = nums[i - 1];
                }
                prev = nums[i];
                repeat = 1;
            }
        }
        if (repeat > max)
            answer = nums[nums.size() - 1];

        return answer;
    }
};
