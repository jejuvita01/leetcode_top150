//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 8/6/23.
//

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> pair;
        vector<char> exist;

        for (int i = 0; i < s.length(); i++) {
            if (pair.find(s[i]) == pair.end() && find(exist.begin(), exist.end(), t[i]) == exist.end()) {
                pair.insert(make_pair(s[i], t[i]));
                exist.push_back(t[i]);
            }
            else {
                if (pair[s[i]] != t[i])
                    return false;
                if (pair.find(s[i]) == pair.end() && find(exist.begin(), exist.end(), t[i]) != exist.end())
                    return false;
            }
        }
        return true;
    }
};
