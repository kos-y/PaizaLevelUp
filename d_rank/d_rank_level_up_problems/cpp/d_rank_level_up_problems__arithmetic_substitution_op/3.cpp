#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a = 202, b = 134, c = 107;

	cout << static_cast<int>(pow((a + b) * c, 2)) << endl;
	return 0;
}