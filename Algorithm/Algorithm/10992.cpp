#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n + i; ++j)
		{
			if (j == n - i - 1 || j == n + i - 1 || i == n - 1)
				cout << '*';
			else
				cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}