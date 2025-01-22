#include<bits/stdc++.h>
using namespace std;

int N, M;
int num[1000002];
vector<pair<int, int>> V;
 
int main() { 
	ios::sync_with_stdio(0); 
	cin.tie(0);
	V.push_back({ 0,0 });
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> num[i];
		num[i] += num[i - 1];
	}
	for (int i = 1; i <= M; i++) {
		int a, b;
		cin >> a >> b;
		cout << num[b] - num[a - 1] << "\n";
	}
	
	return 0;
}