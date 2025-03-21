#include <bits/stdc++.h>
using namespace std;

int N;
int num[100005][3];
int dp_max[3], dp_min[3];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> num[i][0] >> num[i][1] >> num[i][2];
    for (int j = 0; j < 3; ++j) {
        dp_max[j] = num[0][j];
        dp_min[j] = num[0][j];
    }

    for (int i = 1; i < N; ++i) {
        int tmp_max[3], tmp_min[3];

        tmp_max[0] = max(dp_max[0], dp_max[1]) + num[i][0];
        tmp_max[1] = max({ dp_max[0], dp_max[1], dp_max[2] }) + num[i][1];
        tmp_max[2] = max(dp_max[1], dp_max[2]) + num[i][2];

        tmp_min[0] = min(dp_min[0], dp_min[1]) + num[i][0];
        tmp_min[1] = min({ dp_min[0], dp_min[1], dp_min[2] }) + num[i][1];
        tmp_min[2] = min(dp_min[1], dp_min[2]) + num[i][2];

        for (int j = 0; j < 3; ++j) {
            dp_max[j] = tmp_max[j];
            dp_min[j] = tmp_min[j];
        }
    }

    cout << *max_element(dp_max, dp_max + 3) << ' ' << *min_element(dp_min, dp_min + 3);
    return 0;
}
