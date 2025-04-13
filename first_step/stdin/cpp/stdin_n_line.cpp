#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int line_count;
	cin >> line_count;
	cin.ignore();

	vector<string> lines;
	for (int i = 0; i < line_count; i++) {
		string line;
		getline(cin, line);
		lines.push_back(line);
	}

	for (string line : lines) {
		cout << line << endl;
	}

	return 0;
}