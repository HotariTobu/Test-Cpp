#pragma once

#include <iostream>
#include <string>

using namespace std;

int entry1(int argc, char* argv[]) {
	string s;
	cin >> s;

	for (char c : s) {
		cout << (int)c << " ";
	}

	cout << endl;

	for (char c : s) {
		cout << ((int)c - 'A') << " ";
	}

	cout << endl;

	for (char c : s) {
		cout << ((int)c - 'D') << " ";
	}

	cout << endl;

	int sum = 0;
	for (char c : s) {
		sum += c;
	}
	cout << sum << ", " << (sum % 11) << ", " << (char)((sum % 26) + 'A');

	cout << endl;

	return 0;
}