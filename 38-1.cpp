#include<iostream>
#include<list>
using namespace std;

int main ()
{
    list <int> l;

    l.assign({1,2,3,4,5});

    cout<<"size = "<<l.size()<<endl;
    cout<<"1st element = "<<l.front()<<endl;
    cout<<"Last element = "<<l.back()<<endl<<endl;

    l.push_front(0);
    cout<<"1st element after push front = "<<l.front()<<endl;
    l.push_back(6);
    cout<<"Last element after push back = "<<l.back()<<endl<<endl;

    l.pop_front();
    cout<<"1st element after pop front = "<<l.front()<<endl;
    l.pop_back();
    cout<<"Last element after pop back = "<<l.back()<<endl<<endl;

    return 0;
}
