/*8. (Class Template) Design a generic stack class which can be used to create
integer, character or floating point stack objects. Provide all necessary data
members and member functions (push, pop, display &amp; default constructor)
to operate on the stack.*/
#include<iostream>
using namespace std;
template <class T>
class stackarray
{
    
    T *v;
    int s;
    public:
    int TOP=-1;
    stackarray(int s_ize=1)
    {
        s=s_ize;
        v=new T[s];
    }
    //template <class T>
    void push()
    {
        T x;
        cout<<"Enter data: ";
        cin>>x;
        if(TOP == s-1)
        {
        cout<<"OverFlow";
        }
        else
        {
        TOP++;
        v[TOP] = x;
        }
    }
    //template <class T>
    void pop()
    {
    T item;
    if(TOP == -1)
    {
        cout<<"UnderFlow";
    }
    else
    {
        item = v[TOP];
        TOP--;
        cout<<"Popped out element:"<<item<<endl;
    }
    }
    //template <class T>
    void display()
    {
    cout<<"The stack is: ";
    for(int i = TOP;i >= 0;i--)
    {
        cout<<v[i];
    }
    cout<<"\n";
    }
};

int main()
{
    stackarray<int>f1(5);
    cout<<"ENTER int number into the stack.";
    for(int i=1;i<=5;i++)
    {
        f1.push();
    }
    cout<<"\nPOPPING 3 ELEMENT FROM STACK!";
    f1.pop();
    f1.pop();
    f1.pop();
    cout<<"DISPLAYING THE REMAINIING STACK!";
    f1.display();

    stackarray<float>f2(5);
    cout<<"ENTER 5 floating point to the stack";
    for(int i=1;i<=5;i++)
    {
        f2.push();
    }
    cout<<"\nPOPPING 3 ELEMENT FROM STACK!";
    f2.pop();
    f2.pop();
    f2.pop();
    cout<<"DISPLAYING THE REMAINIING STACK!";
    f2.display();

    stackarray<char>f3(5);
    cout<<"ENTER 5 char value to the stack";
    for(int i=1;i<=5;i++)
    {
        f3.push();
    }
    cout<<"\nPOPPING 3 ELEMENT FROM STACK!";
    f3.pop();
    f3.pop();
    f3.pop();
    cout<<"DISPLAYING THE REMAINIING STACK!";
    f3.display();
    return 0;
    /*int ch;
    do
    {
        cout<<"Enter choice:\n1: Push\n2: Pop\n3: Display\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            f1.push();
            break;
            case 2:
            f1.pop();
            break;
            case 3:
            f1.display();
            break;
            default:
            cout<<"Invalid choice";
        }
    }while(ch != 0);
    return 0;*/    
}
