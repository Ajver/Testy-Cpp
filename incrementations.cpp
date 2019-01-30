#include <iostream>

using namespace std;

void foo(int a)
{
	cout << a << endl;
}

int main()
{
	int a = 0;
	cout << "a = " << a << endl;
	cout << "a++ = " << a++ << endl;
	cout << "a = " << a << endl;

	a = 0;
	cout << "a = " << a << endl;
	cout << "++a = " << ++a << endl;
	cout << "a = " << a << endl;

	foo(a++);
	foo(++a);

	++a;
	a++;


	system("pause");

	return 0;
}
