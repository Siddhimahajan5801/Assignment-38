#include<iostream>
using namespace std;
#include<list>
#include<iterator>

int main ()
{
    list <int> l1,l2,l3;

    l1.assign({1,2,3,4,5});            //1st method
    l2.assign(5,1);                    //2nd method
    l3.assign(l1.begin(), l1.end());   //3rd method


    cout<<"The list-1 is : \n\n";

    list<int>::iterator it;

    for (it = l1.begin(); it!= l1.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<"\n\n---------------------------------------\n\n";
    cout<<"The list-2 is : \n\n";

    for (it = l2.begin(); it!= l2.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<"\n\n---------------------------------------\n\n";
    cout<<"The list-3 is : \n\n";

    for (it = l3.begin(); it!= l3.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<"\n\n---------------------------------------\n\n";

    return 0;
}
