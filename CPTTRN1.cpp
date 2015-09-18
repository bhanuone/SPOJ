#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int rows, columns;
		cin >> rows >> columns;
		for(int j = 0; j < rows; j++) {
			for(int k = 0; k < columns; k++) {
				if((i + j) % 2 == 0) {
					cout << "*";
				} else {
					cout << ".";
				}
			}
			cout << endl;
		}
	}
	return 0;
}
