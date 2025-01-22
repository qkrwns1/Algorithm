#include <bits/stdc++.h>
using namespace std;

string tmp;

void game(string s, string t) {
    if (s == t) {
        cout << '1';
        exit(0);
    }
    if (s.size() >= t.size()) {
        return;
    }
    if (t[t.size() - 1] == 'A') {
        tmp = t;
        tmp.erase(tmp.end() - 1);
        game(s, tmp);
    }
    if (t[0] == 'B') {
        tmp = t;
        tmp.erase(tmp.begin());
        reverse(tmp.begin(), tmp.end());
        game(s, tmp);
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, t;
    cin >> s >> t;
    game(s, t);
    cout << '0';
    return 0;
}