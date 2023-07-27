//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 7/27/23.
//

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> change = strs;
        vector<vector<string>> answer;
        set<int> exist;

        for (int i = 0; i < change.size(); i++)
            sort(change[i].begin(), change[i].end());

        for (int i = 0; i < strs.size(); i++) {
            vector<string> tmp;
            if (exist.find(i) == exist.end()) {
                exist.insert(i);
                tmp.push_back(strs[i]);
                for (int j = i + 1; j < strs.size(); j++) {
                    if (change[i].compare(change[j]) == 0 && exist.find(j) == exist.end()) {
                        tmp.push_back(strs[j]);
                        exist.insert(j);
                    }
                }
                strs[i] = "";
                answer.push_back(tmp);
            }
        }

        return answer;
    }
};
