//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/28/23.
//

class Solution {
public:
    int strStr(string haystack, string needle) {
        int answer = -1;

        if (haystack.length() < needle.length())
            return -1;

        for (int i = 0; i < haystack.length() - needle.length() + 1; i++) {
            if (haystack[i] == needle[0]) {
                bool flag = true;
                for (int j = 0; j < needle.length() && i + j < haystack.length(); j++) {
                    if (haystack[i + j] != needle[j]) {
                        flag = false;
                        j = needle.length();
                    }
                }
                if (flag) {
                    answer = i;
                    i = haystack.length();
                }
            }
        }

        return answer;
    }
};
