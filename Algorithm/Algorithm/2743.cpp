#include <iostream>

using namespace std;

int main()
{
	char str[101] = { 0, };

	cin.getline(str, 100);

	int i = 0;
	while (str[i] != 0)
	{
		i++;
	}

	cout << i;
	

	return 0;
}