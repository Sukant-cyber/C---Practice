#include<iostream>
using namespace std;
class Employee
{
public:
	string name;
	string college;
	int age;
	
	void myFunc()
	{
		cout<<"Name- "<<name<<endl;
		cout<<"College- "<<college<<endl;
		cout<<"Age- "<<age<<endl<<endl<<endl;
	}
};
int main()
{
	Employee emp;
	emp.name = "Sukant";
	emp.college = "BIT";
	emp.age = 20;
	emp.myFunc();
	
	Employee emp2;
	emp.name = "CS";
	emp.college = "BIT";
	emp.age = 21;
	emp.myFunc();
}
