// #include <iostream>
// using namespace std;

// class construct {
// public:
// 	int a, b;

// 	construct()
// 	{
// 		a = 10;
// 		b = 20;
// 	}
// };

// int main()
// {
	
// 	construct c;
// 	cout << "a: " << c.a << endl << "b: " << c.b;
// 	return 0;
// }

#include<iostream>
using namespace std;
class student
{
	int rno;
	char name[50];
	double fee;
	public:
	student()					 
	{
		cout<<"Enter the RollNo:";
		cin>>rno;
		cout<<"Enter the Name:";
		cin>>name;
		cout<<"Enter the Fee:";
		cin>>fee;
	}
	
	void display()
	{
		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
	}
};

int main()
{
	student s;
	s.display();
	return 0;
}
