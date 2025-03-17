#include <bits/stdc++.h>
using namespace std;

int num[105];
vector<int> arr;
int N;
bool vis[105];


void DFS(int start, int cur) {
	if (vis[cur]) {
		if (cur == start) {
			arr.push_back(cur);
		}
		return;
	}
	vis[cur] = true;
	DFS(start, num[cur]);
}

int main() {
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> num[i];
	}
	for (int i = 1; i <= N; i++) {
		memset(vis, 0, sizeof(vis));
		DFS(i, i);
	}
	cout << arr.size() << "\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}