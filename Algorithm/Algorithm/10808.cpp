#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int c = 'z' - 'a' + 1;
	int alphabet[c];

	for (int i = 0; i < c; ++i)
		alphabet[i] = -1;
	
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); ++i)
	{
		if(alphabet[str[i] - 'a'] == -1)
			alphabet[str[i] - 'a'] = i;
	}

	for (int i = 0; i < c; ++i)
	{
		cout << alphabet[i] << ' ';
	}
}