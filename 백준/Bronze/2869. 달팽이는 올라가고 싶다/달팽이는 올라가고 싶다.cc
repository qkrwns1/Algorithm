#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	long long int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int N = 1;
	N += (n3 - n1) / (n1 - n2);
	if ((n3 - n1) % (n1 - n2))N++;
	cout << N;
	return 0;
}