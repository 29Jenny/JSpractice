#include<iostream>
using namespace std;

int main()
{
	//常量指针
	int m = 4;
	int *const p=&m;
	*(p) = 8;
	cout << *(p) << endl;

	int n = 9;
	const int* q = &n;
	q = &m;
	cout << *(q) << endl;

	//数组名的特例

	//y    

	return 0;
}