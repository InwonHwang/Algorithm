//1.2 �� ���ڷ� ������ ���ڿ��� ������ reverse(char* str)�Լ��� �����Ͻÿ�.
#include <iostream>

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

void reverse(char* p)
{
	int len = iw_strlen(p);

	for (int i = 0; i < len / 2; ++i)
	{
		char t = p[i];
		p[i] = p[len - i - 1];
		p[len - i - 1] = t;
	}
}

int main()
{
	char s[] = "hello world\0";
	reverse(s);
	cout << s << endl;
	return 0;
}