#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	string str;
	cin >> str;

	stack<char> o;
	int stickCount = 0;

	char pre = str[0];
	o.push(pre);

	if (str[1] != ')')
		stickCount++;
		
	for (int i = 1; i < str.size(); ++i)
	{
		if (str[i] == '(')
		{
			o.push(str[i]);
			pre = str[i];

			if (str[i + 1] != ')')
				stickCount++;
		}
		else
		{
			o.pop();
			if (pre == '(')
			{
				pre = str[i];
				stickCount += o.size();
			}
				
		}
	}

	cout << stickCount;

	return 0;
}