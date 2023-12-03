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
	Employee(string Name, string Company, int Age)
	{
		name= Name;
		college=Company;
		age=Age;
	}
};

int main()
{
	//Parameterized constructor is called
	Employee emp=Employee("Sukant","BIT",20);
	emp.myFunc();
	
	Employee emp2=Employee("Eshan","NucleusTeq",23);
	emp2.myFunc();
}
