#include<iostream>
#include<list>
using namespace std;

int main ()
{
    list <int> l;

    l.assign({1,2,3,4,5});

    cout<<"1st element = "<<l.front()<<endl;
    cout<<"Last element = "<<l.back()<<endl<<endl;

    return 0;

}
