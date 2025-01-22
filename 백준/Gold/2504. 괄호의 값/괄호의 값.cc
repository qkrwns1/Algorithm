#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	stack<char> S;
	cin >> str;
	int idx = 0;
	int sol = 0, tmp = 1;
	for (auto c : str) {
		if (c == '(') {
			tmp *= 2;
			S.push(c);
		}
		else if (c == ')') {
			if (S.empty() || S.top() != '(') {
				sol = 0;
				break;
			}
			else if (str[idx - 1] == '(') {
				sol += tmp;
				tmp /= 2;
				S.pop();
			}
			else {
				tmp /= 2;
				S.pop();
			}
		}
		else if (c == '[') {
			tmp *= 3;
			S.push(c);
		}
		else {
			if (S.empty() || S.top() != '[') {
				sol = 0;
				break;
			}
			else if (str[idx-1] == '[') {
				sol += tmp; 
				tmp /= 3; 
				S.pop();
			}
			else {
				tmp /= 3;
				S.pop();
			}
		}
		idx++;
	}
	if (!S.empty())sol = 0;
	cout << sol;
	return 0;
}