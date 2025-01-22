#include <bits/stdc++.h>
using namespace std;

int N, M;
int space[10][10];
int sp_min = INT_MAX;
int C[10];
int N6;
vector<pair<int, int>> V;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

vector<pair<int, int>> func_space(int a, int b, int idx) {
    vector<pair<int, int>> new1;
    while (1) {
        a += dx[idx];
        b += dy[idx];
        if (a < 0 || a >= N || b < 0 || b >= M || space[a][b] == 6)break;
        if (space[a][b] != 0)continue;
        new1.push_back({ a,b });
    }
    return new1;
}

void func(int k, vector<pair<int, int>> S) {
    if (k == V.size()) {
        sort(S.begin(), S.end());
        S.erase(unique(S.begin(), S.end()), S.end());
        int num = N * M - S.size() - V.size() - N6;
        sp_min = min(sp_min, num);
        return;
    }
    int a = V[k].first, b = V[k].second;
    int t = space[a][b];
    if (t == 1) {
        for (int i = 0; i < 4; i++) {
            vector<pair<int, int>> new_space = func_space(a, b, i);
            vector<pair<int, int>> cur = S;
            cur.insert(cur.end(), new_space.begin(), new_space.end());
            func(k + 1, cur);
        }
    }
    else if (t == 2) {
        for (int i = 0; i < 2; i++) {
            vector<pair<int, int>> new_space1 = func_space(a, b, i);
            vector<pair<int, int>> new_space2 = func_space(a, b, 2 + i);
            vector<pair<int, int>> cur = S;
            cur.insert(cur.end(), new_space1.begin(), new_space1.end());
            cur.insert(cur.end(), new_space2.begin(), new_space2.end());
            func(k + 1, cur);
        }
    }
    else if (t == 3) {
        for (int i = 0; i < 4; i++) {
            vector<pair<int, int>> new_space1 = func_space(a, b, i);
            vector<pair<int, int>> new_space2 = func_space(a, b, (i + 1) % 4);
            vector<pair<int, int>> cur = S;
            cur.insert(cur.end(), new_space1.begin(), new_space1.end());
            cur.insert(cur.end(), new_space2.begin(), new_space2.end());
            func(k + 1, cur);
        }
    }
    else if (t == 4) {
        for (int i = 0; i < 4; i++) {
            vector<pair<int, int>> new_space1 = func_space(a, b, i);
            vector<pair<int, int>> new_space2 = func_space(a, b, (i + 1) % 4);
            vector<pair<int, int>> new_space3 = func_space(a, b, (i + 2) % 4);
            vector<pair<int, int>> cur = S;
            cur.insert(cur.end(), new_space1.begin(), new_space1.end());
            cur.insert(cur.end(), new_space2.begin(), new_space2.end());
            cur.insert(cur.end(), new_space3.begin(), new_space3.end());
            func(k + 1, cur);
        }
    }
    else if (t == 5) {
        vector<pair<int, int>> cur = S;
        for (int i = 0; i < 4; i++) {
            vector<pair<int, int>> new_space1 = func_space(a, b, i);
            cur.insert(cur.end(), new_space1.begin(), new_space1.end());
        }
        func(k + 1, cur);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> space[i][j];
            if (space[i][j] != 0 && space[i][j] != 6) {
                V.push_back({ i,j });
            }
            else if (space[i][j] == 6)N6++;
        }
    }
    vector<pair<int, int>> S;
    func(0, S);
    cout << sp_min;
    return 0;
}