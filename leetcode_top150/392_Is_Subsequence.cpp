//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/25/23.
//

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_index, t_index;

        s_index = t_index = 0;
        while (s_index < s.length() && t_index < t.length()) {
            if (s[s_index] == t[t_index]) {
                s_index++;
                t_index++;
            }
            else
                t_index++;
        }
        
        return (s_index == s.length());
    }
};
