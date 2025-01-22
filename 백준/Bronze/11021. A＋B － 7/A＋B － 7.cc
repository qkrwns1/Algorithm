#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	int n1, n2;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> n1 >> n2;
		cout << "Case #" << i << ": " << n1 + n2 << endl;
	}
	return 0;
}