//1.1 문자열에 포함된 문자들이 전부 유일한지를 검사하는 알고리즘을 구현하라.

#include <iostream>
#include <set>

using namespace std;

size_t iw_strlen(const char* p)
{
	size_t count = 0;

	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}

bool isUnique0(const char* p)
{
	bool ascii[256] = { 0, };

	int len = iw_strlen(p);

	for (int i = 0; i < len; ++i)
	{
		if (ascii[p[i]] == false)
			ascii[p[i]] = true;
		else
			return false;
	}

	return true;
}

bool isUnique1(const char* p)
{
	set<char> s;
	int len = iw_strlen(p);

	for (int i = 0; i < len; ++i)
	{
		s.insert(p[i]);
	}

	if (len == s.size())
		return true;

	return false;
}

int main()
{
	cout << isUnique0("aasdfghqe") << endl;
	cout << isUnique0("asdfghqe") << endl;
	cout << isUnique1("aasdfghqe") << endl;
	cout << isUnique1("asdfghqe") << endl;
	
	return 0;
}