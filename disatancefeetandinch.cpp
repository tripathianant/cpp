#include <iostream>
using namespace std;
class dist
{
	double feet;
	double inches;
	public:
		void getdata()
		{
			cout<<"ENTER FEET AND INCHES : ";
			cin>>feet>>inches;
		}
		void display()
		{
			cout<<feet<<"'"<<inches<<"''"<<endl;
			
		}	
		void add(dist a, dist b)
		{
			inches=a.inches+b.inches;
			feet=a.feet+b.feet;
		}
		dist add(dist b)
		{
			dist temp;
			temp.inches=inches+b.inches;
			temp.feet=feet+b.feet;
			return temp;
		}
};
int main()
{
	dist c1,c2,c3,c4;
	c1.getdata();
	c2.getdata();
	cout<<"DISTANCE 1: ";
	c1.display();
	cout<<"DISTANCE 2: ";
	c2.display();
	c3.add(c1,c2);
	cout<<"OUTPUT FOR c3.add(c1,c2): "<<endl;
	c3.display();
	c4=c1.add(c2);
	cout<<"OUTPUT FOR c4=c1.add(c2): "<<endl;
	c4.display();
	return 0;
}