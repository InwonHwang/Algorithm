#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str[101];
	int count[4] = { 0, };

	while (!cin.getline(str, 101).eof())
	{
		int len = strlen(str);

		for (int i = 0; i < len; ++i)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				count[0]++;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				count[1]++;
			}
			else if (str[i] >= '0' && str[i] <= '9')
			{
				count[2]++;
			}
			else if (isspace(str[i]))
			{
				count[3]++;
			}
		}

		for (int i = 0; i < 4; ++i)
		{
			cout << count[i] << ' ';
			count[i] = 0;
		}
		cout << '\n';
	}
	return 0;
}
