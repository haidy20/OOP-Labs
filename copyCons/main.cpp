#include <iostream>

using namespace std;
class Complex
{
    int real;
    int img;
public:
 Complex (Complex& c)
    {
        real=c.real;
        img=c.img;
        cout<<"copy constructor \n";
    }

    Complex()
    {
        real=img=0;
        cout<<"defult constructor \n";

    }
    Complex(int _real)
    {
        real= _real;
        img=0;
        cout<<"\n constructor";
    }

    Complex(int _real,int _img)
    {
        real=_real;
        img=_img;
        cout<<"para constructor \n";
    }


    void setReal(int _real)
    {
        real=_real;
    }
    int getReal()
    {
        return real;
    }
    void setImg(int _img)
    {
        img=_img;
    }
    int getImg()
    {
        return img;
    }
    void print()
    {
        if (img > 0)
            cout << real << "+" << img << "j"<<endl;
        else if (img < 0)
            cout << real << "-"<<img << "j"<<endl;
        else
            cout << real;
    }
    Complex add(Complex c)
    {
        Complex res;
        res.real=real+c.real;
        res.img=img+c.img;
        return res;
    }
    ~Complex()
    {
        cout<<"\n destructor";
        this-> print();
    }

};
//Complex add(Complex& c1, Complex& c2);
Complex add(Complex c1, Complex c2);

int main()
{
    Complex c2(20,30),c1;
    Complex c3(c2);
    c3.print();
   // c3=add(c1,c2);
    c1.setReal(10);
    c1.setImg(20);
    c2.setReal(40);
    c2.setImg(30);
    c1.add(c2);
    return 0;
}

Complex add(Complex c1, Complex c2)
{
    Complex res;
    res.setReal(c1.getReal() + c2.getReal());
    res.setImg(c1.getImg() + c2.getImg());
    return res;
}



/*Complex add(Complex& c1, Complex& c2)
{
    Complex res;
    res.setReal(c1.getReal() + c2.getReal());
    res.setImg(c1.getImg() + c2.getImg());
    return res;
}*/


