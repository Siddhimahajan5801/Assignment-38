#include<iostream>
using namespace std;
#include<list>
#include<iterator>

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

    list<char>::const_iterator it;

    for (it = l1.begin(); it!= l1.end(); it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl<<endl;

    return 0;

}
