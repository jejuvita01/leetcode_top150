//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/17/23.
//

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        /* real merge sorting
        vector<int> answer;
        int a;
        int b;

        sort(nums1.begin(), nums1.begin() + m);
        sort(nums2.begin(), nums2.end());
        a = b = 0;
        while (a < m && b < n) {
            if (nums1[a] > nums2[b]) {
                answer.push_back(nums2[b]);
                b++;
            }
            else {
                answer.push_back(nums1[a]);
                a++;
            }
        }
        while (a < m)
            answer.push_back(nums1[a++]);
        while (b < n)
            answer.push_back(nums2[b++]);
        
        for (int i = 0; i < answer.size(); i++) {
            nums1[i] = answer[i];
        }
        */

        // easier way
        for (int i = m; i < nums1.size(); i++)
            nums1[i] = nums2[i - m];
        sort(nums1.begin(), nums1.end());
    }
};
