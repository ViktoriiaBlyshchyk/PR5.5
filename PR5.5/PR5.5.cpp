#include <iostream>

using namespace std;

int sum(int n)
{
	if (n / 10 != 0)
		return n % 10 + sum(n / 10);
	else
		return n % 10;
}
int main()
{
	int n;
	cout << "n = "; cin >> n;
	cout << "sum(n) = " << sum(n) << endl;
	cout << "Depth = " << n << endl;

	return 0;
}

