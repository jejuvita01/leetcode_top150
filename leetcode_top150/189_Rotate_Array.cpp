//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/25/23.
//

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> tmp;

        if (k > nums.size())
            k %= nums.size();
        
        for (int i = 0; i < nums.size() - k; i++)
            tmp.push_back(nums[i]);
        nums.erase(nums.begin(), nums.begin() + nums.size() - k);
        for (int i = 0; i < tmp.size(); i++)
            nums.push_back(tmp[i]);
    }
};
