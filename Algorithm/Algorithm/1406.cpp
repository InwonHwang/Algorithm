#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	string str;
	stack<char> s1;
	stack<char> s2;

	cin >> str;
	for (int i = 0; i < str.size(); ++i)
	{
		s1.push(str[i]);
	}

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		char cmd, c;
		cin >> cmd;

		if (cmd == 'P')
		{
			cin >> c;
			s1.push(c);
		}
		else if (cmd == 'L')  // s1 abcd x s2
		{			
			if (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		else if (cmd == 'D')
		{				
			if (!s2.empty())
			{
				s1.push(s2.top());
				s2.pop();
			}			
		}
		else if (cmd == 'B')
		{
			if (!s1.empty())
				s1.pop();
		}
	}

	while (!s1.empty())
	{
		s2.push(s1.top());
		s1.pop();
	}

	while (!s2.empty())
	{
		cout << s2.top();
		s2.pop();
	}

	return 0;
}