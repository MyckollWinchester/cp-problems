/*
* @lc app=leetcode id=1106 lang=cpp
* [1106] Parsing A Boolean Expression
* --ProblemURL (change after contest)
* Sat Oct 19 2024, 22:35:44 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    bool findInRanges(string s, size_t first, size_t last, char c) {
        for (size_t i = first; i < last; i++)
            if (s[i] == c) return true;
        return false;
    }

    bool parseBoolExpr(string s) {
        while (s.contains("(")) {
            int lb = s.find_last_of('(');
            int rb = s.find(')', lb + 1);
            char op = s[lb - 1];
            if (op == '&') {
                if (findInRanges(s, lb + 1, rb, 'f'))
                    s.replace(lb - 1, rb - lb + 2, "f");
                else
                    s.replace(lb - 1, rb - lb + 2, "t");
            } else if (op == '|') {
                if (findInRanges(s, lb + 1, rb, 't'))
                    s.replace(lb - 1, rb - lb + 2, "t");
                else
                    s.replace(lb - 1, rb - lb + 2, "f");
            } else // op == '!'
                s.replace(lb - 1, rb - lb + 2, (s[lb + 1] == 't' ? "f" : "t"));
        }
        return s[0] == 't';
    }
};
// @lc code=end

