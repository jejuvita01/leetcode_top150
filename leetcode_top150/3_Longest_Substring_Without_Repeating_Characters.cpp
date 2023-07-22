//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/22/23.
//

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int tmp = 1;
        int answer = 0;

        if (s == "")
            return 0;

        for (int i = 0; i < s.length() - 1; i++) {
            tmp = 1;
            vector<char> alpha;
            alpha.push_back(s[i]);
            for (int j = i + 1; j < s.length(); j++) {
                if (find(alpha.begin(), alpha.end(), s[j]) != alpha.end()) {
                    if (tmp > answer)
                        answer = tmp;
                    j = s.length();
                }
                else {
                    tmp++;
                    alpha.push_back(s[j]);
                    if (tmp > answer)
                        answer = tmp;
                }
            }
        }
        // cout << tmp;
        if (tmp > answer)
            answer = tmp;
        
        return answer;
    }
};
