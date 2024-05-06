#include <iostream>

using namespace std;
class Stack
{
    int* arr;
    int tos;
    int size;

public:
    int getSize()
    {
        return size;
    }
    Stack()
    {
        tos = 0;
        size=5;
        arr=new int[size];
        cout<<"\ndefult constructor";


    }
    Stack(int _size)
    {
        tos = 0;
        size=_size;
        arr = new int[size];
        cout<<"\npara constructor";
    }
    Stack(Stack const & s)
    {
        tos = s.tos;
        size = s.size;
        arr=new int[size];
        for(int i =0; i<tos; i++)
        {
            arr[i]=s.arr[i];
        }
        cout<<"\ncopy constructor";
    }
    push(int d)
    {
        if(tos==size)
        {
            cout<<"\n Stack is full";
            return 0;
        }
        else
        {
            arr[tos]=d;
            tos++;
            return 1;
        }
    }
    pop(int& d)
    {
        if(tos==0)
        {
            cout<<"\n stack is empty";
            return 0;
        }
        else
        {
            tos--;
            d = arr[tos];
            return 1;
        }
    }

//s2=s1
    operator=(Stack const& s)
    {
        tos=s.tos;
        size=s.size;
        delete[] arr;
        arr= new int [size];
        for(int i=0; i<tos; i++)
        {
            arr[i]=s.arr[i];

        }
    }
    //s2+s1

    Stack operator+(Stack const& s)
    {
        Stack res(size + s.size);
        for (int i=0; i<tos; i++)
        {
            res.push(arr[i]);
        }
        for(int i=0; i<s.tos; i++)
        {
            res.push(s.arr[i]);
        }
        return res;
    }

    void print()
    {
        for(int i =0; i<tos; i++)
        {
            cout<<endl<< arr[i]<<endl;
        }
    }

    ~Stack()
    {
        cout<<"\ndestructor";
    }


};
int ViewAllContant(Stack& s);
int main()
{
    int x;
    Stack s1(6);
    cout<<"\nstack1"<<endl;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.print();
    Stack s2(1);
    cout <<"\nstack2"<<endl;
    s2.push(5);
    s2.print();
    Stack s3 = s1 + s2;
    cout<<"\nplus operator"<<endl;
    s3.print();
    cout<<"\nequal operator"<<endl;
    s2=s1;
    s2.print();

    cout<<"\n";

    /* if(s1.pop(x)==1)
    {
        cout<<x<<",";
    }
    */
    ViewAllContant(s1);
    return 0;
}
int ViewAllContant(Stack & s)
{
    int x;
    for(int i =0; i<s.getSize(); i++)
    {
        if(s.pop(x)==1)
        {
            cout<<x <<"," ;

        }
    }
}
