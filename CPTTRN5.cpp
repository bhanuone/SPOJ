#include <iostream>
using namespace std;

int main() {
	int T, l, c, s;
	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> l >> c >> s;
		string border;
		for (int i = 0; i < (c * (s + 1) + 1); i ++) border += "*";
		cout << border << endl;
		for (int i = 0; i < l; i++) {
			for (int m = 0; m < s; m++) {
				string row = "*";
				for (int j = 0; j < c; j++) {
					for (int k = 0; k < s; k++) {
						string dl, ndl;
						if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) {
							if (m == k) {
								row += "\\";
							} else {
								row += ".";
							}
						}
						else {
							if (m + k == s - 1) {
								row += "/";
							} else {
								row += ".";
							}
						}
					}
					row += "*";
				}
				cout << row << endl;
			}
			cout << border << endl;
		}
		cout << endl;
	}
	return 0;
}
