/*Write a template function to search for a given key
element from an array. Illustrate how you perform search in integer,
character as well as double arrays using the same template function*/
#include<iostream>
using namespace std;
template<typename T>
T sarray(T arr[],int s,T k)
{
    for(int i=0;i<s;i++)
    {
        if(arr[i]==k)
        return arr[i];
    }
    return -1;
}

int main()
{
    int a[5]={3,4,5,6,7};
    float f[5]={3.1,4.1,5.1,6.1,7.1};
    int k1,key;
    float f1,fkey;
    cout<<"enter 1 int key && 1 float keys:";
    cin>>k1>>f1;
    key=sarray(a,5,k1);
    if(key==k1)
    cout<<"found";
    else
    cout<<"notfound";
    fkey=sarray(f,5,f1);
    if(fkey==f1)
    cout<<"found";
    else
    cout<<"notfound";
    return 0;
}