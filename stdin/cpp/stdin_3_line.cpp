#include <iostream>
#include <string>
#include <vector>
using namespace std;

constexpr int LINE_COUNT = 3;

int main()
{
	vector<string> lines;

	for (int i = 0; i < LINE_COUNT; i++) {
		string line;
		getline(cin, line);
		lines.push_back(line);
	}

	for (string line : lines) {
		cout << line << endl;
	}

	return 0;
}