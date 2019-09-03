#include <bits/stdc++.h> 
using namespace std;
int main(){
	int N;
	cin >> N;
	string W[101];//配列は大きめにとる

	for (int i = 1; i <= N; i++) {
		cin >> W[i];
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j < i; j++) {
			if (W[i] == W[j]) {
				cout << "No";
				return 0;
			}
		}
		if (W[i][0] != W[i - 1][W[i - 1].length() - 1]) {
            //次の最初と1個前の最後の長さ−１を参照
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
}