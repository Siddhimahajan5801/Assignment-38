#include<iostream>
#include<list>
using namespace std;
#include<iterator>

int main ()
{
    list <int> l;

    l.assign({1,2,8,5,1,6,5,2});

    cout<<"Enter the element whose occurrence you want to remove \n";
    int num;
    cin>>num;

    l.remove(num);  //number should be from one of the elements of the list

    cout<<"\nList after removing occurrences is : \n\n";

    list <int> :: iterator it;
    for(it=l.begin(); it!= l.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl<<endl;

    return 0;
}
