#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void hanoi(int n, int start, int mid, int end) {
    if (n == 1) {
        cout << start << ' ' << end << '\n';
        return;
    }
    hanoi(n - 1, start, end, mid);
    cout << start << ' ' << end << '\n';
    hanoi(n - 1, mid, start, end);
}
int main() {
    int n;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    string a = to_string(pow(2, n));
    int x = a.find('.');
    a = a.substr(0, x);
    a[a.length() - 1] -= 1;
    cout << a << '\n';


    if (n <= 20)
        hanoi(n, 1, 2, 3);


    return 0;
}