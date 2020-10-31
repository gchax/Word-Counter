#include <iostream>
using namespace std;

int wordCounter(char*);

int main()
{
	char s[999];
	cin.getline(s, 999);
	int n = wordCounter(&s[0]);
	cout << n;

	return 0;
}

int wordCounter(char* s)
{
	int state = 0, i = 0, n = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\0' || s[i] == '.' || s[i] == ',' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '[' || s[i] == ']' || s[i] == '{' || s[i] == '}') state = 0;
		else if (state == 0)
		{
			state = 1;
			n++;
		}
		i++;
	}

	return n;
}