#include <iostream>

using namespace std;

class Stack{
public:
    int tos;
    int * arr;
    int size;



    Stack(){
        tos=0;
        size =0;
        arr=new int[size];
    }

    //defult implement copy con

    /*Stack(Stack const&  s){
        tos=s.tos;
        size=s.size;
        arr=s.arr;
    }*/

    Stack(int _size){
        tos=0;
        size =_size;
        arr=new int[size];
    }

    Stack(Stack const & s){
        tos=s.tos;
        size=s.size;
        arr=new int[size];

        for(int i=0;i<tos;i++)
            arr[i]=s.arr[i];
    }

    //relase arr

    ~Stack(){
        delete []arr;
    }

    int push(int _num){
        if(tos==size)
        {
            cout<<"Stack is full"<<endl;

            return 0;
        }
            arr[tos]=_num;
            tos++;
            return 1;
    }

    int pop(int& num){

        if(tos==0)
        {
            cout<<"Stack Is Empty"<<endl;
            return 0;
        }

           tos--;
            num=arr[tos];
            return 1;
    }
   friend void viewContentByValue(Stack s);
   friend void viewContentByRef(Stack const & s);

   Stack operator=(Stack const &s)
   {
       tos=s.tos;
       size=s.size;
       arr=new int[size];

       for(int i=0;i<tos;i++)
            arr[i]=s.arr[i];
   }



   Stack operator+(Stack const & s)
   {
       Stack New(s.size+size);
       New.tos=s.tos+tos;

       New.arr=new int[New.size];

       for(int i=0;i<tos;i++)
           New.arr[i]=arr[i];

       for(int i=0;i<s.tos;i++)
           New.arr[i+tos]=s.arr[i];

           return New;
   }

};

void viewContentByValue(Stack s)
{
    int x=0;
    while(s.pop(x))
        cout<< x << ",";
}
//not constant
void viewContentByRef(Stack  & s)
{
   int x=0;
    while(s.pop(x))
        cout<< x << ",";
}

int main()
{
    Stack s(5);


    /*{
        Stack s2(s);
    }*/

    s.push(5);
    s.push(10);
    s.push(5);
    s.push(5);
    s.push(7);
    s.push(8);

    int x=0;
    int& y=x;

    Stack s5(s);
    viewContentByValue(s);
    viewContentByRef(s);

    if(s.pop(y)==1)
        cout<<y<<endl;

    if(s.pop(y)==1)
        cout<<y<<endl;

    if(s.pop(y)==1)
        cout<<y<<endl;

    if(s.pop(y)==1)
        cout<<y<<endl;

    if(s.pop(y)==1)
        cout<<y<<endl;

    if(s.pop(y)==1)
        cout<<y<<endl;



    Stack s1(s) ;

    if(s5.pop(y)==1)
        cout<<y<<endl;

    int* ptr=new int(5);
    int* &p=ptr;

    int num =9;
    //int &numref=10; <<error
    int &numref=num;

    cout<< *ptr;
    cout<<*p;

    cout<< num;
    cout<<numref;

    Stack s2(5);
    s2.push(1);
    s2.push(2);
    s2.push(3);
    s2.push(4);

    Stack s3;
    s3=s2;

    if(s3.pop(y)==1)
        cout<<y<<endl;
    if(s3.pop(y)==1)
        cout<<y<<endl;

    if(s2.pop(y)==1)
        cout<<y<<endl;


    Stack sOne(10);
    sOne.push(30);
    sOne.push(20);
    sOne.push(10);


    Stack sTwo(20);
    sTwo.push(90);
    sTwo.push(80);
    sTwo.push(70);
    sTwo.push(60);



    Stack sThree(1);
    sThree=sTwo+sOne;
    viewContentByRef(sThree);

    return 0;
}

