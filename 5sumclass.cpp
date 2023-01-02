/*(Class Template) Write a program to define a class template for reading
two data items from the keyboard and find out their sum.*/
#include<iostream>
using namespace std;
template <class T1, class T2>
class sumfind
{
    T1 a;
    T2 b;
    public:
    sumfind(T1 x, T2 y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"sum ="<<a+b; 
    }
};
int main()
{
    sumfind<float,int>sum1(1.3,123);
    sumfind<int,char>sum2(143,'p');
    sum1.show();
    sum2.show();
}