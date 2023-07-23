//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/22/23.
//

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> answer;
        int start;
        int prev;
        int cnt;
        string tmp = "";

        if (nums.size() > 0) {
            start = nums[0];
            prev = nums[0];
            cnt = 1;
        }
        for (int i = 1; i < nums.size(); i++) {
            if (prev + 1 == nums[i]) {
                prev = nums[i];
                cnt++;
            }
            else {
                if (cnt == 1) {
                    tmp += to_string(start);
                }
                else {
                    tmp += to_string(start);
                    tmp += "->";
                    tmp += to_string(prev);
                }
                answer.push_back(tmp);
                tmp = "";
                start = nums[i];
                prev = nums[i];
                cnt = 1;
            }
        }
        if (nums.size() > 0) {
            if (cnt == 1) {
                tmp += to_string(start);
            }
            else {
                tmp += to_string(start);
                tmp += "->";
                tmp += to_string(prev);
            }
            answer.push_back(tmp);
        }
        return answer;
    }
};
