#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int num[10000];
	int n, cnt = 0;
	
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}
	cout << *max_element(num, num + 9) << endl;
	for (int i = 0; i < 9; i++) {
		cnt++;
		if (*max_element(num, num + 9) == num[i])break;
	}
	cout << cnt;
}