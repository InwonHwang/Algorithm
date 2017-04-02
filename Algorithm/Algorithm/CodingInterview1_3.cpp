#include <iostream>

using namespace std;

size_t iw_strlen(const char* str)
{
	size_t c = 0;
	while (str[c] != '\0')
	{
		c++;
	}

	return c;
}

bool isPermutation(const char* str, const char* target)
{
	int lenStr = iw_strlen(str);
	int lenTarget = iw_strlen(target);

	char asciiStr[256] = { 0, };
	char asciiTarget[256] = { 0, };
	
	for (int i = 0; i < lenStr; ++i)
		asciiStr[str[i]]++;

	for (int i = 0; i < lenTarget; ++i)
		asciiTarget[target[i]]++;

	for (int i = 0; i < 256; ++i)
	{
		if (asciiTarget[i] > asciiStr[i])
			return false;
	}

	return true;
}z

int main()
{
	char str[] = "13579\0";
	char target[] = "97531\0";

	cout << isPermutation(str, target);

	return 0;
}