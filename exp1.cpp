#include <iostream>
using namespace std;

struct student
{
	string name;
	int roll_no;
	char div;
	float marks;
};
int main()
{
	
	cout << "Name  : Pranjali Shankar Patil\n";
    cout << "Roll No : 45\n";
    cout << "Class : S.Y. B. CSE\n";
   
	student s;
	cout<<"Enter name:";
	cin>>s.name;
	cout<<"Enter roll_no:";
	cin>>s.roll_no;
	cout<<"Enter div:";
	cin>>s.div;
	cout<<"Enter marks:";
	cin>>s.marks;
	
	
	cout<<"name:" <<s.name <<endl;
	cout<<"roll_no:" <<s.roll_no <<endl;
	cout<<"div:" <<s.div <<endl;
	cout<<"marks:" <<s.marks <<endl;
	
	return 0;
	
}



