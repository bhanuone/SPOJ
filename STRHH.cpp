#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		string s;
		cin >> s;
		long long int k = s.length() / 2;
		string r;
		for(int j = 0; j < k; j++) {
			if(j % 2 != 0) {
				r += s[j];
			}
		}
		cout << r << endl;
	}
	return 0;
}
