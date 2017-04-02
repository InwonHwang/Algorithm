#include <iostream>

using namespace std;

size_t iw_strlen(const char* str)
{
	size_t c = 0;

	while (str[c] != '\0')
		c++;

	return c;
}

char* compress(char* str)
{
	char* tmp = str;

	int len = iw_strlen(str);

	char prev = tmp[0];
	str[0] = tmp[0];
	int index = 1;
	for (int i = 1; i < len; ++i)
	{
		if (prev == tmp[i]) continue;
			
		str[index++] = tmp[i];
		prev = tmp[i];
	}
	str[index] = '\0';

	return str;
}

int main()
{
	char str[] = "Hellllo wwwWWorld\0";

	cout << compress(str);

	return 0;
}