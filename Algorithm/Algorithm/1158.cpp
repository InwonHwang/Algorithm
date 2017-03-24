#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	deque<int> dq;
	deque<int> print;

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; ++i)
		dq.push_back(i);

	while (!dq.empty())
	{
		for (int i = 0; i < m - 1; ++i)
		{
			int temp = dq.front();
			dq.pop_front();
			dq.push_back(temp);
		}		
		int t = dq.front();
		dq.pop_front();
		print.push_back(t);
	}

	cout << '<';
	for (int i = 0; i < print.size() - 1; ++i)
	{
		cout << print[i] << ", ";
	}
	cout << print[print.size() - 1] << '>';


	return 0;
}