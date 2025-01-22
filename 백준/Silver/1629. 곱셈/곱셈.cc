#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int fuc(ll a, ll b, ll c) {
	if (b == 1)return a % c;
	ll val = fuc(a, b / 2, c);
	val = val * val % c;
	if (b % 2 == 0)return val;
	return val * a % c;
}


int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	cout << fuc(a, b, c);
	return 0;
}