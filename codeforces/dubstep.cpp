/*
* Dubstep
* https://codeforces.com/problemset/problem/208/A
* Fri Sep 27 2024, 01:01:05 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    if (s.length() < 3) {
        cout << s << '\n';
        return;
    }
    string sentence, lastThree, word;
    sentence = lastThree = word = "";
    int i = 0;
    while (i < s.length()) {
        for (; lastThree.length() < 3 && i < s.length(); ++i)
            lastThree += s[i];
        word += lastThree;
        for (; lastThree != "WUB" && i < s.length(); ++i) {
            lastThree = lastThree.substr(1) + s[i];
            word += s[i];
        }
        sentence += word.substr(0, word.length() - 3) + (word.length() - 3 > 0 && lastThree == "WUB" ? " " : "");
        if (i == s.length() && lastThree != "WUB" && word.length() > 2)
            sentence += word.substr(word.length() - 3);
        lastThree = word = "";
    }
    cout << sentence << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
