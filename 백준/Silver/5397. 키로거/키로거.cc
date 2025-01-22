#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	
	int N;
	cin >> N;
	while (N--) {
		cin >> str;
		list<char> L;
		auto cnt = L.begin();
		for (auto c : str) {
			if (c == '<') {
				if (cnt != L.begin())cnt--;
			}
			else if (c == '>') {
				if (cnt != L.end())cnt++;
			}
			else if (c == '-') {
				if (cnt != L.begin()) { // Only erase if there is a character to erase
					cnt--;
					cnt = L.erase(cnt);
				}
			}
			else {
				L.insert(cnt, c);
				
			}
		}
		for (auto c : L)cout << c;
		cout << '\n';
	}
	return 0;
}