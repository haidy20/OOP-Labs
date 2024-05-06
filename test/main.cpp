
#include <iostream>

using namespace std;
class Complex
{
    int real;
    int img;
public:
    Complex()
    {
        real=img=0;
          cout<<"parameterless constructor"<<endl;
    }
    Complex (int _real)
    {
        real=_real;
        img=0;
         cout<<"1-parameter constructor"<<endl;

    }
    Complex(int _real,int _img)
    {
        real=_real;
        img=_img;
         cout<<"2-parameter constructor"<<endl;

    }
    Complex(Complex const & c)
    {
        real=c.real;
        img=c.img;
         cout<<"copy constructor"<<endl;
    }

    void setReal(int _real)
    {
        real=_real;
    }
    void setImg(int _img)
    {
        img=_img;
    }
    void setcomplex(int _real,int _img)
    {
        real=_real;
        img=_img;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    void print()
    {
        if (img>0)
            cout<<real<<"+"<<img<<"J"<<endl;
        else if (img<0)
            cout<<real<<img<<"J"<<endl;
        else
            cout<<real<<endl;
    }

    Complex operator+ (Complex const &c) //complex+complex
    {
        Complex res;
        res.real=real+c.real;
        res.img=img+c.img;
        return res;
    }
    Complex operator+ (int x) //complex+int
    {
        Complex res;
        res.real=real+x;
        res.img=img;
        return res;
    }
    Complex operator+=(Complex const &c) //complex+=complex
    {
        real=real+c.real;
        img=img+c.img;
        return *this;
    }

    Complex operator++()  //prefix
    {
        real++;
        return *this;
    }
    Complex operator++(int)  //postfix
    {
        Complex res(real,img);
        real++;
        return res;
    }
    explicit operator int(){
            return real;
    }
    int operator==(Complex const & c)
    {
        return real==c.real && img==c.img;
    }
    int operator!=(Complex const & c)
    {
        return !(*this==c);
    }

    ~Complex()
    {
        cout<<"object destruction"<<endl;
    }
};
Complex operator+(int left,Complex right);
int main()
{
    Complex c1(1,2),c2(5,6),c3,c4(1,2),c5(3,4),c6(3,4);
    c3=c1+c2;
    c3.print();
    c4+=c5;
    c4.print();
    c3=c1+3;
    c3.print();
    c3=c1++;
    c3.print();
    c3=++c1;
    c3.print();
    c3=3+c2;
    c3.print();
    int x;
    x=(int)c2;
    cout<<x;
    if(c2!=c5)
        cout<<"\nnot equal";
    if(c6==c5)
        cout<<"\nequal\n";
    return 0;
}
Complex operator+(int left,Complex right)
{
    return right+left;
}
