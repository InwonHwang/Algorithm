#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		stack<char> s;
		string str;
		cin >> str;

		int j = 0;
		for (j = 0; j < str.size(); ++j)
		{
			if (str[j] == '(')
			{
				s.push(str[j]);
			}
			else
			{
				if (s.empty())
				{
					break;
				}
				else
				{
					s.pop();
				}
			}
		}

		if (j == str.size() && s.empty())
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}