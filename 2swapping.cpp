#include<iostream>
#include <cstdlib>
using namespace std;
template<class T>
void swap1( T&x,T&y)
{
    T temp=x;
    x=y;
    y=temp;
}
int main()
{
    float p,q;
    int m,n;
    cin>>m>>n;
    cout<<"before swap"<<m<<""<<n;
    swap1(m,n);
    cout<<"\nafter swapping"<<m<<"<<n;
    cin>>p>>q;
    cout<<"before swap"<<p<<""<<q;
    swap1(p,q);
    cout<<"\nafter swapping"<<p<<""<<q;
    return 0;
}