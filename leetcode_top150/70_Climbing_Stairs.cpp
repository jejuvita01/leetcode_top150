//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 8/3/23.
//

class Solution {
public:
    int climbStairs(int n) {
        int f0 = 0;
        int f1 = 1;
        int f2;

        for (int i = 0; i < n; i++) {
            f2 = f0 + f1;
            f0 = f1;
            f1 = f2;
        }

        return f2;
    }
};
