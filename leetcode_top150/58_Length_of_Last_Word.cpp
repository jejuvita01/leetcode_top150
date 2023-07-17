//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/17/23.
//

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int answer = 0;

        while (s[i] == ' ')
            i--;

        for (; i >= 0 && s[i] != ' '; i--)
            answer++;

        return answer;
    }
};
