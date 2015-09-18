#include <iostream>
using namespace std;

int main() {
	int T, l, c, h, w;
	cin >> T;
	for(int t = 0; t < T; t++) {
		cin >> l >> c >> h >> w;
		string border;
		for(int i = 0; i < (c * (w + 1) + 1); i ++) border += "*";
		cout << border << endl;
		for(int i = 0; i < l; i++) {
			for(int m = 0; m < h; m++) {
				string row = "*";
				for(int j = 0; j < c; j++) {
					for(int k = 0; k < w; k++) {
						row += ".";
					}
					row += "*";
				}
				cout << row << endl;
			}
			cout << border << endl;
		}
	}
	return 0;
}
