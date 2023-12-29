#include <iostream>
#include <string>
#include <set>
using namespace std;


int main()
{
	set<int> s;

	int num = 1;
	int count = 0;

	while (num <= 10000)
	{
		string a = to_string(num);

		int gn = num;
		for (int i = 0; i < a.length(); i++)
		{
			gn += (int)a[i] - 48;
		}
		s.insert(gn);

		set<int>::iterator iter;
		for (iter = s.begin(); iter != s.end(); iter++)
		{
			if (*iter == num)
				count++;
		}
		if (count == 0)
			cout << num << endl;
		num++;
	}
}
