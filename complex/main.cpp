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
        cout<<"Default\n";

    }
    Complex(int _real,int _img)
    {
        real=_real;
        img=_img;
        cout<<"Parameter\n";
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
        cout<<"\nDestructor";
        this->print();
    }

};
//Complex add(Complex c1, Complex c2);
int main()
{
    Complex c1,c2,c3,c4,c5(2,4),c6;
    c1.setReal(10);
    c1.setImg(20);
    c2.setReal(40);
    c2.setImg(30);
    c3=c1.add(c2);
   // c1.print();
    //c2.print();
    //c3.print();
    //c4.print();
    //c5.print();
    //c6=add(c1,c2);
    //c6.print();
    return 0;
}

/*Complex add(Complex c1, Complex c2)
{
    Complex res;
    res.setReal(c1.getReal() + c2.getReal());
    res.setImg(c1.getImg() + c2.getImg());
    return res;
} */

