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
	
	cout<<"俳持税 腰硲澗 託景企稽 持失 鞠奄 凶庚拭 舛背爽畏柔艦陥."<<endl;
	n = numberpluse(x); 
	put(n);
	cout<<"俳持税 腰硲澗 "<<n<<"腰 脊艦陥."<<endl;
	
	cout<<"俳持税 戚硯引 持析聖 脊径馬室推.(句嬢床奄 姥歳)"<<endl;
	cin>>a>>b;
	put(a, b);
	
	cout<<"俳持税 輩球肉 腰硲研 脊径背爽室推.(句嬢床奄 X, 収切 須 脊径 X)"<<endl;
	cin>>m;
	put(m);
}

int start_look(int a) 
{
	int number=1;
	
	while(1)
	{
		cout<<"繕噺馬壱 粛精 俳持税 腰硲研 脊径馬室推. (曽戟 0, 及稽亜奄 -1)"<<endl;
		cin>>number;
		
		if(number == -1) return -1;
		if(number == 0) return 0;
	
		if(number > x) 
		{
			cout<<number<<"腰税 俳持精 糎仙馬走 省柔艦陥. (曽戟 0)"<<endl;
		}
		
		else 
		{
			int i;
			
			cout<<number<<"腰 俳持税 戚硯聖 繕噺馬壱 粛生檎 1, 持析聖 繕噺馬壱 粛生檎 2, 俳持税 輩球肉 腰硲研 繕噺馬壱 粛生檎 3腰聖 脊径馬室推. (曽戟 0)"<<endl;
			cin>>i;
			
			if(i == 1)
			{
				cout<<number<<"腰 俳持税 戚硯精 "<<st[number].name<<"脊艦陥."<<endl;
			}
			
			else if(i == 2)
			{
				cout<<number<<"腰 俳持税 持析精 "<<st[number].birth<<"脊艦陥."<<endl;
			}
			
			else if(i == 3)
			{
				cout<<number<<"腰 俳持税 持析精 "<<st[number].phone_number<<"脊艦陥."<<endl;
			} 
		}
	}
	
}  

int main(void)
{
	bool check = false;
	int i;
	char * str=MakeStrAdr(20);
	
	strcpy(str, "照括馬室推! 俳持 舛左 獣什奴脊艦陥.");
	cout<<str<<endl;
	
	delete(str);
	
	while(1) 
	{
		cout<<"俳持舛左 脊径聖 据馬獣檎 1, 俳持舛左 繕噺研 据馬獣檎 0聖 喚君爽室推."<<endl;
		cin>>check;
		
		if(check == true) 
		{
			cout<<"俳持 舛左研 脊径馬獣畏柔艦猿? (1/0)"<<endl;
			cin>>check;
			
			if(check == true) start_scan();    
			
			else if(check == false)
			{
				cout<<"脊径聖 据馬獣走 省澗陥檎 曽戟 馬畏柔艦陥."<<endl;
				return 0;
			}
		}
		else if(check == false)
		{
			cout<<"俳持 舛左研 繕噺馬獣畏柔艦猿? (1/0)"<<endl;
			cin>>check;
				
			if(check == true) start_look(i);
			
			else if(check == false)
			{
				cout<<"脊径聖 据馬獣走 省澗陥檎 曽戟 馬畏柔艦陥."<<endl;
				return 0;
			}
		}
	} 
	せせせせせせせせせせせせせせせせせせせせせせせせせせせせせせせせせせ 
	return 0;
}
