#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for(int t = 0; t < T; t++) {
		int l, c;
		cin >> l >> c;
		string border = "";
		for(int i = 0, m = 3 * c + 1; i < m; i++)
			border += '*';
		cout << border << endl;
		for(int i = 0; i < l; i++) {
			for(int s = 0; s < 2; s++) {
				string row = "*";
				for(int j = 0; j < c; j++) {
					row += "..*";
				}
				cout << row << endl;
			}
			cout << border << endl;
		}
	}
	return 0;
}
