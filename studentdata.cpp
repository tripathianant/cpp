#include <iostream>
using namespace std;
class student
{
	string name;
	int roll;
	int marks;
	public:
		void get()
		{
			cout<<"ENTER NAME : ";
			cin>>name;
			cout<<"ENTER ROLL NUMBER : ";
			cin>>roll;
			cout<<"ENTER MARKS : ";
			cin>>marks;
		}
		void display()
		{
			cout<<"NAME : "<<name<<endl;
			cout<<"ROLL NUMBER : "<<roll<<endl;
			cout<<"MARKS : "<<marks<<endl;
			
		}	
};
int main()
{
    cout << "NAME : ANANT TRIPATHI\nROLL NO. : 2105692\nCSE 16" << endl;
	student ob;
	ob.get();
	ob.display();
	return 0;
}