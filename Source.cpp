#include<iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	cout << "Enter quantity ";
	cin >> n;
	int* a;
	a = new int[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	int num = 19;
	for (int i = 0; i < n; ++i) {
		int flag = 0;
		for (int j = i + 1; j < n; ++j) {
			if (a[i] == a[j]){
				num = j;
				//a[j] = a[n - 1];
				for (int k = num; k < n - 1; ++k) {
					int t = a[k];
					a[k] = a[k + 1];
					a[k + 1] = t;
				}
				a[n - 1] = 0;
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		if (a[i] == a[i + 1])
			a[i + 1] = 0;
	}
	
	for (int t = 0; t < n; ++t)
		cout << a[t] << " ";
}