//
//  main.cpp
//  leetcode_top150
//
//  Created by 김서현 on 8/7/23.
//

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string tmp = "";
        map<char, string> alpha_word;
        vector<string> exist_word;

        for (int i = 0; i < s.length(); i++) {
            if (!isspace(s[i]))
                tmp += s[i];
            else {
                words.push_back(tmp);
                tmp = "";
            }
        }
        if (tmp != "")
            words.push_back(tmp);

        if (words.size() != pattern.length())
            return false;

        for (int i = 0; i < pattern.length(); i++) {
            if (alpha_word.find(pattern[i]) == alpha_word.end() && find(exist_word.begin(), exist_word.end(), words[i]) == exist_word.end()) {
                alpha_word.insert(make_pair(pattern[i], words[i]));
                exist_word.push_back(words[i]);
            }
            else {
                if (alpha_word[pattern[i]] != words[i])
                    return false;
                if (alpha_word.find(pattern[i]) == alpha_word.end() && find(exist_word.begin(), exist_word.end(), words[i]) != exist_word.end())
                    return false;
            }
        }

        return true;
    }
};
