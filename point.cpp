#include<iostream>
using namespace std;

int main()
{
	//����ָ��
	int m = 4;
	int *const p=&m;
	*(p) = 8;
	cout << *(p) << endl;

	int n = 9;
	const int* q = &n;
	q = &m;
	cout << *(q) << endl;

	//������������

	//y    

	return 0;
}