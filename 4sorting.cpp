/*(Non-type as function parameters) Write a program to demonstrate the
concept behind function templates with non-type as function parameters by
taking sorting an array of numbers as an examples.*/
#include<iostream>
using namespace std;
template <class T>
void swapxy(T &x, T &y)
{
    T  temp=x;
    x=y;
    y=temp;
}
template <class T>
void bubsort(T a[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;i<j;j--)
        {
            if(a[j]<a[j-1])
            {
                swapxy(a[j],a[j-1]);
            }
        }
    }
}

int main()
{
    float p[5]={9.8,9.6,8.9,1.2,6.5};
    int m[5]={6,3,8,12,1};
    bubsort(p,5);
    bubsort(m,5);
    cout<<"sorted array of float an dint are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<m[i]<<" ";
    }
}