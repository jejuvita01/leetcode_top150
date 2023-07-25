//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/25/23.
//

class Solution {
public:
    string reverseWords(string s) {
        string answer;
        string tmp = "";

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (tmp != "") {
                    reverse(tmp.begin(), tmp.end());
                    answer += tmp;
                    while (s[i] == ' ' && i > 0)
                        i--;
                    if (i != 0 || s[i] != ' ') {
                        answer += ' ';
                    }
                    i++;
                    tmp = "";
                }
            }
            else {
                tmp += s[i];
            }
        }
        if (tmp != "") {
            reverse(tmp.begin(), tmp.end());
            answer += tmp;
        }

        return answer;
    }
};
