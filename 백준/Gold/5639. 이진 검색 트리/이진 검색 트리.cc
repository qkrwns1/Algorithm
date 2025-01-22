#include <bits/stdc++.h>
using namespace std;

typedef struct tree {
	int num;
	struct tree* left;
	struct tree* right;
}tree;

void init(tree* T) {
	T->num = -1;
}

tree* add(int num) {
	tree* n1 = new tree;
	n1->left = NULL;
	n1->right = NULL;
	n1->num = num;
	return n1;
}

tree* find(tree* T, int num) {
	if (num < T->num) {
		if (T->left == NULL)return T;
		return find(T->left, num);
	}
	else {
		if (T->right == NULL)return T;
		return find(T->right, num);
	}
}

void build(tree* T, int num) {
	if (T->num == -1) {
		T->num = num;
		T->left = NULL;
		T->right = NULL;
		return;
	}
	tree* cur = find(T, num);
	if (cur->num > num) {
		cur->left = add(num);
	}
	else {
		cur->right = add(num);
	}
}

void A(tree* T) {
	if (T == NULL)return;
	A(T->left);
	A(T->right);
	cout << T->num << '\n';
}

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int n;
	tree T;
	init(&T);
	while (cin >> n) {
		// if (n == -1)break;
		build(&T, n);
	}
	A(&T);
	return 0;
}