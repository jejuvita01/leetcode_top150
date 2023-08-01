//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/31/23.
//

class Solution {
public:
    string addBinary(string a, string b) {
        bool plus = false;
        int a_index, b_index;
        string answer = "";

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        a_index = b_index = 0;
        while (a_index < a.length() && b_index < b.length()) {
            if (a[a_index] == '1' && b[b_index] == '1') {
                if (plus)
                    answer += '1';
                else
                    answer += '0';
                plus = true;
            }
            else if (a[a_index] == '0' && b[b_index] == '0') {
                if (plus)
                    answer += '1';
                else
                    answer += '0';
                plus = false;
            }
            else {
                if (plus)
                    answer += '0';
                else {
                    answer += '1';
                    plus = false;
                }
            }
            a_index++;
            b_index++;
        }
        for (; a_index < a.length(); a_index++) {
            if (plus) {
                if (a[a_index] == '1')
                    answer += '0';
                else {
                    answer += '1';
                    plus = false;
                }
            }
            else
                answer += a[a_index];
        }
        for (; b_index < b.length(); b_index++) {
            if (plus) {
                if (b[b_index] == '1')
                    answer += '0';
                else {
                    answer += '1';
                    plus = false;
                }
            }
            else
                answer += b[b_index];
        }
        if (plus)
            answer += '1';

        reverse(answer.begin(), answer.end());

        return answer;
    }
};
