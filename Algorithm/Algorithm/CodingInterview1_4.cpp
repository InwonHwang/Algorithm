#include <iostream>
#include <string>

using namespace std;

void space_to_percent20_1(string& str)
{	
	int len = str.length();
	int spaceCount = 0;
	for (int i = 0; i < len; ++i)
	{
		if (isspace(str[i]))
			spaceCount++;
	}
	str.resize(len + spaceCount * 2);

	len = str.length();
	for (int i = len - spaceCount * 2; i > -1; --i)
	{
		if (isspace(str[i]))
		{
			spaceCount--;
			str[i + 2 * spaceCount] = '%';
			str[i + 2 * spaceCount + 1] = '2';
			str[i + 2 * spaceCount + 2] = '0';
		}
		else
		{
			str[i + 2 * spaceCount] = str[i];
		}			
	}
}

void space_to_percent20_2(string& str)
{
	size_t cur = 0;
	while ((cur = str.find(' ', cur)) != str.npos)
	{
		str.replace(cur, 1, "%20");
		cur += 3;
	}
}

int main()
{
	string str = "Hello Wor ld ";
	//space_to_percent20_1(str);
	space_to_percent20_2(str);
	
	cout << str;
	return 0;
}