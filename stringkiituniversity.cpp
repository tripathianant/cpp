#include<iostream>
#include<string>
using namespace std;
int main(){
    cout << "NAME : ANANT TRIPATHI\nROLL NO. : 2105692\nCSE 16" << endl;
    string name="KIIT University";
    cout<<name.length()<<endl;
    cout<<name.at(5)<<endl;  // char at index 3
    cout<<name.compare("kiit university")<<endl;
    cout<<name.find('i')<<endl;
    cout<<name.substr(4)<<endl;
    name.resize(9);
    cout<<name<<endl;
    if(name.empty())
        cout<<"String is empty"<<endl;
    else    
        cout<<"String is not empty"<<endl;
    name.clear();
    cout<<name<<endl;
    return 0;
}