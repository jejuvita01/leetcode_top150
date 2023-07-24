//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/22/23.
//

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer;
        char alpha;

        for (int i = 0; i < strs[0].length(); i++) {
            alpha = strs[0][i];
            bool flag = true;
            for (int j = 0; j < strs.size(); j++) {
                if (strs[j][i] != alpha) {
                    i = strs[0].length();
                    j = strs.size();
                    flag = false;
                    break;
                }
            }
            if (flag)
                answer += alpha;
        }
        return answer;
    }
};
