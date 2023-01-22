#include<iostream>
using namespace std;
#include<list>
#include<iterator>

int main ()
{
    list <int> l1;

    for (int i=0; i<10; i++)
    {
        l1.push_back(i+1);
    }

    cout<<"The list is : \n\n";

    list<int>::iterator it;

    for (it = l1.begin(); it!= l1.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;


    return 0;
}
