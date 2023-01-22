#include<iostream>
using namespace std;
#include<list>

int main ()
{
    list <char> l1;

    l1.push_back('s');
    l1.push_back('i');
    l1.push_back('d');
    l1.push_back('d');
    l1.push_back('h');
    l1.push_back('i');

    cout<<"\nThe list is : ";

    for(char x : l1)
      cout<<x<<" ";

    cout<<endl<<endl;

    return 0;

}
