#include <iostream>
using namespace std;

int main(void)
{
	const int num = 12;
	
	const int *po = &num; //������ ���� ���� 
	
	const int *(&num2) = po; //������ ���� 
	
	cout<<*num2<<endl; //num�� ����� �� ��� 
}
