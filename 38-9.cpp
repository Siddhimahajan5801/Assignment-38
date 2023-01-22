#include<iostream>
#include<list>
using namespace std;
#include<iterator>

int main ()
{
    list <int> l;

    l.assign({1,2,4,4,9,3,3,2,1});

    cout<<"List is : ";

    list<int> :: iterator it;
    for (it=l.begin(); it!= l.end(); it++)
    {
       cout<<*it<<"  ";
    }

    cout<<endl<<endl;

    cout<<"List after removing consecutive duplicate elements are : \n\n";
    l.unique();

    for (it=l.begin(); it!= l.end(); it++)
    {
       cout<<*it<<"  ";
    }

    cout<<endl<<endl;

    return 0;
}
