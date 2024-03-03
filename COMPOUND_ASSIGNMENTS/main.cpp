//Составные присваивания

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	/* ++ increment (инкремент)
	   -- decrement (декремент)
	   ++i prefix increment
	   i++ postfix increment*/
	int i = 0;
	i = ++i + ++i;
	cout << i << endl;// 4

	int a = 0;
	a = a++ + ++a;
	cout << a << endl;// 3

	int x = 0;
	x = x++ + 1 + ++x * 2;
	cout << x << endl;// 5

	int y = 0;
	y = y++ + 1 + (++y *= 2);
	cout << y << endl;// 6

	int c = 0;
	c += c++ + 1 + (++c *= 2);
	cout << c << endl;// 8
}