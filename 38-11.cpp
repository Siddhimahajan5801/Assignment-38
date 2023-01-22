#include<iostream>
#include<list>
using namespace std;
#include<iterator>

int main ()
{
    list <int> l1;

    l1.assign({5,2,6,8,1});

    list <int> l2 = l1;

    cout<<"List-2 :  \n\n";

    list<int>::iterator it;

    for (it = l2.begin(); it!= l2.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;

    return 0;

}

