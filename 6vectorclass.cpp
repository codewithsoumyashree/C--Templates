/*6.(Class Template) Write a class template to represent a generic vector.
Include member functions to perform the following tasks:
a)create vector
b)modify vector
c)multiply vector
d)display vector*/
#include<iostream>
using namespace std;
template<class T>
class vectorC
{
    T
    public:
    void createC()
    void modifyC(T newval,int index)
    void multiplyC(T scalarval)
    {
        for(int i=0;i<size;i++)
        {
            a[i]*=scalarval;
        }
    }
    void displayC()
}