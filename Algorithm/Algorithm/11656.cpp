#include <iostream>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
	deque<string> dqstr;
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); ++i)
	{
		string tmpstr = &str[i];
		dqstr.push_back(tmpstr);
	}

	sort(dqstr.begin(), dqstr.end());

	for (int i = 0; i < dqstr.size(); ++i)
	{
		cout << dqstr[i] << '\n';
	}

	return 0;
}