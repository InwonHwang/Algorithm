#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b, c, d;

	cin >> a >> b >> c >> d;
	string s1, s2;

	s1 = to_string(a) + to_string(b);
	s2 = to_string(c) + to_string(d);

	cout << stoll(s1) + stoll(s2);

	return 0;

	//long long a, b, c, d;

	//cin >> a >> b >> c >> d;
	//
	//int i = 10;
	//int tempNum = b;
	//while ((tempNum /= 10) > 0)
	//{
	//	i *= 10;
	//}
	//a *= i;
	//
	//i = 10;
	//tempNum = d;
	//while ((tempNum /= 10) > 0)
	//{
	//	i *= 10;
	//}
	//c *= i;

	//cout << a + b + c + d;

	//return 0;
}