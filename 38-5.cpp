#include<iostream>
using namespace std;
#include<list>
#include<iterator>

int main ()
{
    list <int> l1;

    int num;

    cout<<"Enter the elements of the list \n";
    for (int i=0; i<5; i++)
    {
        cin>>num;
        l1.push_back(num);
    }

    cout<<"\n\nThe list is : ";

    list <int> :: iterator i;
    for(i=l1.begin(); i!= l1.end(); i++)
    {
       cout<<*i<<"  ";
    }

    cout<<endl<<endl;

    return 0;

}
