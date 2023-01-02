/*(Function Template) Define a function template for finding the
minimum value contained in an array. Write main() function to find
the minimum value of integer array and minimum value of floating
point numbers in an array*/
#include<iostream>
using namespace std;
template <class M>
M find_minnum(M a[], int n)
{
    M min= a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}

int main()
{
    int si[5]={2,90,34,1,67};
    float sf[5]={12.3,4.5,6.7,8.9,9.1};
    int intm=find_minnum(si,5);
    float floatm=find_minnum(sf,5);
    cout<<"THE MIN NO IN INT ARRAY:"<<intm<<endl;
    cout<<"THE MIN NO IN FLOAT ARRAY:"<<floatm<<endl;

}

