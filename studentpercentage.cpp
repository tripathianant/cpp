#include <iostream>
using namespace std;
class student
{
	string name;
	int roll;
	int marks[5];
	int total=0;
	double percentage;
	public:
		void getdata()
		{
			cout<<"ENTER NAME : ";
			cin>>name;
			cout<<"ENTER ROLL NUMBER : ";
			cin>>roll;
			cout<<"ENTER MARKS OF 5 SUBJECTS : ";
			for(int i=0; i<5; i++)
			{
				cin>>marks[i];
				total = (total + marks[i]);	
			}
			}
		void display()
		{
			cout<<"\nSTUDENT'S NAME : "<<name<<endl;
			cout<<"ROLL NUMBER : "<<roll<<endl;  
			for(int i=0; i<5; i++)
			{
				cout<<"MARKS OF SUBJECT "<<i+1<<" : ";
				cout<<marks[i]<<endl;	
			}
			cout<<"TOTAL MARKS : "<<(total)<<endl;
			cout<<"PERCENTAGE : "<<(total/5)<<"%"<<endl;
			}	
};
int main()
{
    cout << "NAME : ANANT TRIPATHI\nROLL NO. : 2105692\nCSE 16" << endl;
	student ob;
	ob.getdata();
	ob.display();
	return 0;
}