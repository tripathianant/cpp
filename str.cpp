#include <iostream>
using namespace std;
int main()
{
    string str = "C++ Tutorial";
    cout << "String contains :" << str << '\n';
    cout << str.find_last_of("Tutorial");
    return 0;
}