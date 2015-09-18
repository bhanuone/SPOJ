#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int n;
		cin >> n;
		string res;
		cin >> res; // lxh or hhb
		for (int i = 0; i < n - 1; i++) {
			string tmp;
			cin >> tmp;
			if (res == tmp) res = "hhb";
			else res = "lxh";
		}
		cout << res << endl;
	}
	return 0;
}
