#include <iostream>
#include "text.h"
using namespace std;

int main()
{
	setlocale(0, "");
	MyList list("���������");
	list.push_back_current_level("������ 2");
	list.push_back_next_level("2.1. ��������");
	list.push_back_next_level("1.�����������");
	list.push_back_current_level("2.���������");
	list.print();

	cout << endl;

	list.pop();
	list.print();

	cout << endl;

	list.pop();
	list.print();

	system("pause");
	return 0;
}

