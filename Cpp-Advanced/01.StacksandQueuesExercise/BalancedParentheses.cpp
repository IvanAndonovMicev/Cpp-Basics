#include <iostream>
#include <stack>
#include <sstream>
#include <climits>

using namespace std;

bool isBalanced(const string& expresion)
{
	stack<char> openBrackets;

	for (char c : expresion)
	{
		switch (c)
		{
		case '(':
		case '[':
		case '{':
			openBrackets.push(c);
			break;
		case ')':
			if (openBrackets.size() == 0 || openBrackets.top() != '(')
				return false;
			openBrackets.pop();
			break;
		case ']':
			if (openBrackets.size() == 0 || openBrackets.top() != '[')
				return false;
			openBrackets.pop();
			break;
		case '}':
			if (openBrackets.size() == 0 || openBrackets.top() != '{')
				return false;
			openBrackets.pop();
			break;
		}
	}
	return true;
}

int main()
{
	string expresion;

	cin >> expresion;

	cout << (isBalanced(expresion) ? "YES" : "NO") << endl;
}
