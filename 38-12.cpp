#include<iostream>
#include<array>
#include<list>
using namespace std;
#include<iterator>

int main ()
{
    array <int,5> l1 = {1,2,3,4,5};

    list <int> l2;
    l2.assign(l1.begin(),l1.end());

    cout<<"List-2 :  \n\n";

    list<int>::iterator it;

    for (it = l2.begin(); it!= l2.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;

    return 0;

}

