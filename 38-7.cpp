#include<iostream>
#include<list>
using namespace std;

int main ()
{
    list <int> l;

    l.assign({1,2,3,4,5});

    l.push_front(0);
    cout<<"1st element after inserting (0) in the beginning = "<<l.front()<<endl<<endl;

    l.push_back(6);
    cout<<"Last element after inserting (6) in the end  = "<<l.back()<<endl<<endl;

    return 0;
}

