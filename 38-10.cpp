#include<iostream>
#include<list>
using namespace std;
#include<iterator>

int main ()
{
    list <int> l1,l2,l3;

    l1.assign({5,2,6,8});

    l2.assign({6,3,8,1,3});

    l1.merge(l2);

    cout<<"List after merging \n\n";

    list<int>::iterator it;

    for (it = l1.begin(); it!= l1.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;

    return 0;

}

