//???

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	getline(cin, str);
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] < 'A' || str[i] > 'z') continue;

		if (str[i] >= 'a')
		{

			str[i] = (str[i] + 13) % 'z';
			if (str[i] < 'a')
				str[i] += 'a' - 1;
		}
		else
		{
			str[i] = (str[i] + 13) % 'Z';
			if (str[i] < 'A')
				str[i] += 'A' - 1;
		}
	}

	cout << str;

	return 0;
}
