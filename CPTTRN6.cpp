#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int l, c, h, w;
		cin >> l >> c >> h >> w;
		string width, gutter, divider;
		for (int i = 0; i < w; i++) width += ".", gutter += "-";
		divider = gutter;
		for (int i = 0; i < c; i++) divider += "+", divider += gutter;
		for (int i = 0; i <= l; i++) {
			for (int j = 0; j < h; j++) {
				string row = width;
				for (int m = 0; m < c; m++) {
					row += "|";
					row += width;
				}
				cout << row << endl;
			}
			if (i == l) break;
			cout << divider << endl;
		}
	}
	return 0;
}
