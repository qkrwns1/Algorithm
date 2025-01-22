#include <bits/stdc++.h>
using namespace std;

int N;
int arr[1000001] = { 15, 25, 22, 357, 16, 23, -53, 12, 46, 3 };
int tmp[1000001];


//void merge(int st, int en) {
//	int mid = (st + en) / 2;
//	int idx1 = st;
//	int idx2 = mid;
//	for (int i = st; i < en; i++) {
//		if (idx2 == en)tmp[i] = arr[idx1++];
//		else if (idx1 == mid)tmp[i] = arr[idx2++];
//		else if (arr[idx1] >= arr[idx2])tmp[i] = arr[idx2++];
//		else tmp[i] = arr[idx1++];
//	}
//	for (int i = st; i < en; i++)arr[i] = tmp[i];
//}
//
//
//void merge_sort(int st, int en) {
//	if (st == en - 1) return;
//	int mid = (st + en) / 2;
//	merge_sort(st, mid); 
//	merge_sort(mid, en); 
//	merge(st, en); 
//}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)cin >> arr[i];
	sort(arr, arr + N);
	for (int i = 0; i < N; i++) cout << arr[i] << '\n'; 
}