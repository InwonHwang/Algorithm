#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	deque<int> dq;

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string str;
		int num;
		cin >> str;

		if (str.compare("push_back") == 0)
		{
			cin >> num;
			dq.push_back(num);
		}
		else if (str.compare("push_front") == 0)
		{
			cin >> num;
			dq.push_front(num);
		}
		else if (str.compare("front") == 0)
		{
			if (dq.empty())
				cout << -1 << '\n';
			else
				cout << dq.front() << '\n';
		}
		else if (str.compare("back") == 0)
		{
			if (dq.empty())
				cout << -1 << '\n';
			else
				cout << dq.back() << '\n';
		}
		else if (str.compare("size") == 0)
		{
			cout << dq.size() << '\n';
		}
		else if (str.compare("empty") == 0)
		{
			cout << dq.empty() << '\n';
		}
		else if (str.compare("pop_front") == 0)
		{
			if (dq.empty())
				cout << -1 << '\n';
			else
			{
				cout << dq.front() << '\n';
				dq.pop_front();
			}
			
		}
		else if (str.compare("pop_back") == 0)
		{
			if (dq.empty())
				cout << -1 << '\n';
			else
			{
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}		
	}
}