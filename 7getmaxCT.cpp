/*Write a program to explain class template by
creating a template T for a class named pair having two data members
of type T which are inputted by a constructor and a member function
get-max() return the greatest of two numbers to main. Note: the value of
T depends upon the data type specified during object creation.*/
#include<iostream>
using namespace std;
template<class T>
class pair2
{
    T a;
    T b;
    public:
    pair2(T X, T Y)
    {
        a=X;
        b=Y;
    }
    T getmaxXY()
    {
        return a>b?a:b;
    }
};

int main()
{
    pair2<float>f1(4.8,2.3);
    pair2<int>p1(4,9);
    cout<<f1.getmaxXY()<<endl;
    cout<<p1.getmaxXY();
}