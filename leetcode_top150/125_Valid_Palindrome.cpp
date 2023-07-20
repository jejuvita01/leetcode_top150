//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/20/23.
//

class Solution {
public:
    bool isPalindrome(string s) {
        int front, end;

        front = 0;
        end = s.length() - 1;
        while (front <= end) {
            if ((isalpha(s[front]) || isdigit(s[front])) && (isalpha(s[end]) || isdigit(s[end]))) {
                if (tolower(s[front]) != tolower(s[end]))
                    return false;
                front++;
                end--;
            }
            if (front < s.length() && !isalpha(s[front]) && !isdigit(s[front]))
                front++;
            if (end > 0 && !isalpha(s[end]) && !isdigit(s[end]))
                end--;
        }
        return true;
    }
};
