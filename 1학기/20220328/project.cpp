#include<iostream>
#include<string.h> 
#include<stdlib.h>
using namespace std;

typedef struct _student
{
	int std_num;
	string name;
	string birth;
	string phone_number;
} student;

student st[30];
int x=0;

int numberpluse(int n, int o = 1)
{
	return n+o;
}

char * MakeStrAdr(int len)
{
	char * str= new char;
	return str;
}

int put(int &n)
{
	st[n].std_num = n;
	x++;
}

char put(string &a, string &b)
{
	st[x].name = a;
	st[x].birth = b;
}

char put(string &m)
{
	st[x].phone_number = m;
}

void start_scan() 
{	
	int n;
	string a, b, m;
	
	cout<<"�л��� ��ȣ�� ���ʴ�� ���� �Ǳ� ������ �����ְڽ��ϴ�."<<endl;
	n = numberpluse(x); 
	put(n);
	cout<<"�л��� ��ȣ�� "<<n<<"�� �Դϴ�."<<endl;
	
	cout<<"�л��� �̸��� ������ �Է��ϼ���.(���� ����)"<<endl;
	cin>>a>>b;
	put(a, b);
	
	cout<<"�л��� �ڵ��� ��ȣ�� �Է����ּ���.(���� X, ���� �� �Է� X)"<<endl;
	cin>>m;
	put(m);
}

int start_look(int a) 
{
	int number=1;
	
	while(1)
	{
		cout<<"��ȸ�ϰ� ���� �л��� ��ȣ�� �Է��ϼ���. (���� 0, �ڷΰ��� -1)"<<endl;
		cin>>number;
		
		if(number == -1) return -1;
		if(number == 0) return 0;
	
		if(number > x) 
		{
			cout<<number<<"���� �л��� �������� �ʽ��ϴ�. (���� 0)"<<endl;
		}
		
		else 
		{
			int i;
			
			cout<<number<<"�� �л��� �̸��� ��ȸ�ϰ� ������ 1, ������ ��ȸ�ϰ� ������ 2, �л��� �ڵ��� ��ȣ�� ��ȸ�ϰ� ������ 3���� �Է��ϼ���. (���� 0)"<<endl;
			cin>>i;
			
			if(i == 1)
			{
				cout<<number<<"�� �л��� �̸��� "<<st[number].name<<"�Դϴ�."<<endl;
			}
			
			else if(i == 2)
			{
				cout<<number<<"�� �л��� ������ "<<st[number].birth<<"�Դϴ�."<<endl;
			}
			
			else if(i == 3)
			{
				cout<<number<<"�� �л��� ������ "<<st[number].phone_number<<"�Դϴ�."<<endl;
			} 
		}
	}
	
}  

int main(void)
{
	bool check = false;
	int i;
	char * str=MakeStrAdr(20);
	
	strcpy(str, "�ȳ��ϼ���! �л� ���� �ý����Դϴ�.");
	cout<<str<<endl;
	
	delete(str);
	
	while(1) 
	{
		cout<<"�л����� �Է��� ���Ͻø� 1, �л����� ��ȸ�� ���Ͻø� 0�� �����ּ���."<<endl;
		cin>>check;
		
		if(check == true) 
		{
			cout<<"�л� ������ �Է��Ͻðڽ��ϱ�? (1/0)"<<endl;
			cin>>check;
			
			if(check == true) start_scan();    
			
			else if(check == false)
			{
				cout<<"�Է��� ���Ͻ��� �ʴ´ٸ� ���� �ϰڽ��ϴ�."<<endl;
				return 0;
			}
		}
		else if(check == false)
		{
			cout<<"�л� ������ ��ȸ�Ͻðڽ��ϱ�? (1/0)"<<endl;
			cin>>check;
				
			if(check == true) start_look(i);
			
			else if(check == false)
			{
				cout<<"�Է��� ���Ͻ��� �ʴ´ٸ� ���� �ϰڽ��ϴ�."<<endl;
				return 0;
			}
		}
	} 
	�������������������������������������������������������������������� 
	return 0;
}
