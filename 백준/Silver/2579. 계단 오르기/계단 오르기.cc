#include<bits/stdc++.h>
using namespace std;

int N,M;
int num[301];
int cnt = 0;
int d[305][3];



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> num[i];
	}
	d[1][1] = num[1];
	d[1][2] = 0;
	d[2][1] = num[2];
	d[2][2] = num[1] + num[2];
	for (int i = 3; i <= N; i++) {
		d[i][2] = d[i - 1][1] + num[i];
		d[i][1] = max(d[i - 2][1], d[i - 2][2]) + num[i];
	}
	cout << max(d[N][1], d[N][2]);
	return 0;
}