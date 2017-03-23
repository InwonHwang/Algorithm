#include <iostream>
#include <string>
#include <stack>

using namespace std;

int s[10000];
int pointer = 0;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		string str;
		int num;
		cin >> str;

		if (str.compare("push") == 0)
		{
			cin >> num;
			s[pointer] = num;
			pointer++;
		}
		else if (str.compare("pop") == 0)
		{
			if (pointer == 0)
				cout << -1 << '\n';
			else
			{
				cout << s[pointer - 1] << '\n';
				pointer--;
			}
		}
		else if (str.compare("top") == 0)
		{			
			if (pointer == 0)
				cout << -1 << '\n';
			else
				cout << s[pointer - 1] << '\n';
		}
		else if (str.compare("size") == 0)
		{
			cout << pointer << '\n';
		}
		else if (str.compare("empty") == 0)
		{
			if (pointer == 0)
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
	}
	return 0;
}