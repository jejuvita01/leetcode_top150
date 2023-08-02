//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 8/2/23.
//

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool plus = false;

        for (int i = digits.size() - 1; i >= 0; i--) {
            if (i == digits.size() - 1) {
                if (digits[i] == 9) {
                    plus = true;
                    digits[i] = 0;
                }
                else {
                    digits[i] += 1;
                    plus = false;
                    break;
                }
            }
            else {
                if (plus == false)
                    break;
                else {
                    if (digits[i] == 9) {
                        digits[i] = 0;
                        plus = true;
                    }
                    else {
                        digits[i] += 1;
                        plus = false;
                        break;
                    }
                }
            }
        }
        if (plus == true)
            digits.insert(digits.begin(), 1);

        return digits;
    }
};
