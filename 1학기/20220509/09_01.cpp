#include<iostream>
#include<cstring>
using namespace std;

class Person{
	private:
		char* name; //�׳� ������ ���� �������� �迭 ������ 
	public:
		Person(char* name)
		{
			this->name = new char[strlen(name)+1];
			strcpy(this->name, name);
		}
		~Person()
		{
			delete[] name; //���� �����ٶ� �迭�� ��ü�ϱ� 
		}
		
		void WhatYourName() const
		{
			cout << "My name is " << name << endl;
		}
};
class UnivStudent : public Person{
	private :
		char* subject;
	public :
		
		UnivStudent(char* name, char* subject) : Person(name)
		{
			this->subject = new char[strlen(subject)+1];
			strcpy(this->subject, subject);
		}
		
		~UnivStudent() 
		{
			delete[] subject;
		}
		
		void WhoAreYou() const
		{
			WhatYourName();
			cout << "My major is " << subject << endl;
		}
};

int main(void)
{
	UnivStudent st1("Kim", "Mathematics");
	st1.WhoAreYou();
	UnivStudent st2("Park", "Computer Engineering");
	st2.WhoAreYou();
	return 0;
}
