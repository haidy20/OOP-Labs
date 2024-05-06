#include <iostream>

using namespace std;
class Shape // Abstract class
{
protected:
    int dim1;
    int dim2;
public:
    Shape(int _dim1=1,int _dim2=1)
    {
        dim1 =_dim1;
        dim2= _dim2;
    }
    void setDim1(int _dim1)
    {
        dim1 =_dim1;
    }
    void setDim2(int _dim2)
    {
        dim2 =_dim2;
    }
    int getDim1()
    {
        return dim1;
    }
    int getDim2()
    {
        return dim2;
    }

    void print()
    {
        cout<<"dim1"<<dim1<<"dim2"<<dim2;
    }
    virtual float calcArea()=0; // pure virtual fun

};
class Rect :public Shape
{
public:
    Rect(int _dim1=1,int _dim2=1) :Shape (_dim1,_dim2) {}
    float calcArea()
    {
        return dim1*dim2;
    }
};
class Tri :public Shape
{
public:
    Tri(int _dim1=1,int _dim2=1) :Shape (_dim1,_dim2) {}
    float calcArea()
    {
        return 0.5*dim1*dim2;
    }
};

class Square :protected Shape
{
public:
    Square(int _dim1=1) :Shape (_dim1,_dim1) {}
    float calcArea()
    {
        return dim1*dim1;
    }

};
void myfun(Shape*s)
{
    cout<<endl<<s->calcArea();
}

int main()
{
    Rect r1(10,20);
//r1.print();
    myfun(&r1);
    Tri r2(20,20);
//r2.print();
    myfun(&r2);
    Square r3(10);

// myfun(&r3);
    cout<<endl<<r3.calcArea();

    return 0;
}
