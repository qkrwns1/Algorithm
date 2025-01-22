#include <bits/stdc++.h>
using namespace std;

int num[100000];
int pos = 0;

int main() {
	int N;
	cin >> N;
	string op;
	int n1;
	while (N--) {
		cin >> op;
		if (!op.compare("push")) {
			cin >> n1;
			num[pos++] = n1;
		}
		else  if (!op.compare("pop")) {
			if (pos == 0) {
				cout << "-1\n";
			}
			else {
				cout << num[--pos] << '\n';
			}
		}
		else  if (!op.compare("size")) {
			cout << pos << '\n';
		}
		else  if (!op.compare("empty")) {
			if (pos == 0)cout << '1' << '\n';
			else cout << '0' << '\n';
		}
		else  if (!op.compare("top")) {
			if (pos == 0) cout << "-1" << '\n';
			else cout << num[pos - 1] << '\n';
		}
	}
	return 0;
}