#include<bits/stdc++.h>
using namespace std;

int N;
vector<string> str;

bool cmp(const string& a, const string& b) {
	if (a.size() < b.size()) {
		return true;
	}
	else if (a.size() == b.size()) {
		int a_num = 0, b_num = 0;
		for (int i = 0; i < a.size(); i++) {
			if (isdigit(a[i])) {
				a_num += (a[i] - '0'); 
			}
			if (isdigit(b[i])) {
				b_num += (b[i] - '0');
			}
		}
		if (a_num < b_num)return true;
		else if (a_num == b_num) {
			if (strcmp(a.c_str(), b.c_str()) < 0) {
				return true;
			}
		}
	}
	return false;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		string a;
		cin >> a;
		str.push_back(a);
	}
	sort(str.begin(), str.end(), cmp);
	for (int i = 0; i < N; i++) {
		cout << str[i] << '\n';
	}
	return 0;
}