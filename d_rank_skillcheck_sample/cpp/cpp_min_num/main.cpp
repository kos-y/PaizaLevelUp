#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vs;

	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		vs.push_back(n);
	}

	cout << *min_element(vs.begin(), vs.end()) << endl;
	return 0;
}