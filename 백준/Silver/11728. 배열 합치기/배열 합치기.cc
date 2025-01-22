#include <bits/stdc++.h>
using namespace std;

int N, M;
int A[1000005], B[1000005], C[2000010];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}
	sort(A, A + N);
	sort(B, B + M);
	int id1 = 0, id2 = 0, id3 = 0;
	for (int i = 0; i < N + M; i++) {
		if (id1 < N && id2 < M) {
			if (A[id1] < B[id2]) {
				C[id3] = A[id1];
				id1++, id3++;
			}
			else if (A[id1] > B[id2]) {
				C[id3] = B[id2];
				id2++, id3++;
			}
			else {
				C[id3] = A[id1];
				id1++, id3++;
				C[id3] = B[id2];
				id2++, id3++;
			}
		}
		else {
			while (id1 < N) {
				C[id3] = A[id1];
				id1++, id3++;
			}
			while (id2 < M) {
				C[id3] = B[id2];
				id2++, id3++;
			}
		}
	}
	for (int i = 0; i < N + M; i++) {
		cout << C[i] << " ";
	}
	return 0;
}