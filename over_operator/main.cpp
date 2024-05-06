#include <iostream>

using namespace std;
class Complex{
 int real;
 int img;
public:
    Complex(){
    real=img=0;
    }
Complex(int _real,int _img)

{
    real= _real;
    img= _img;
}
void setReal(int _real){
real = _real;}

void setImg(int _img){
img = _img;}
 int getReal()
 {
     return real;
 }
int getImg()
 {
     return img;
 }



Complex add(Complex const& c)
{
Complex res;
res.real=real+c.real;
res.img=img+c.img;
return res;
}

Complex operator+ (Complex const& c)
{
Complex res;
res.real=real+c.real;
res.img=img+c.img;
return res;
}

Complex operator+(int x){
 Complex res;
 res.real=real+x;
 res.img=img;
 return res;}


 Complex operator +=(Complex const& c)
 {
     real=real+c.real;
     img=img+c.img;
     return *this;
 }

 int operator==(Complex c)
 {
     if (real==c.real && img==c.img)
        return 1;
     else
        return 0;
 }
 int operator !=(Complex c)
 {
     if (real==c.real && img==c.img)
        return 0;
     else
        return 1;
 }
 Complex operator++() //prefix
 {
     real++;
     return *this;
 }
 Complex operator++(int x) //postfix
 {
 Complex res (real,img);
     real++;
     return res;
 }
 explicit operator int ()
 {
     return real;
 }
void print();
};

void Complex:: print()
{
    cout<<endl;
    if(img>0)
    {
    cout<<real<<"+"<<img<<"j";
    }
    else if (img<0)
    {
    cout<<real<<img<<"j";

    }
    else
    cout<<real;
}


Complex operator+(int left,Complex right)
{
   Complex res;
    res.setReal(right.getReal()+left);
    res.setImg(right.getImg());
    return res;

}
int main()
{ int i;
Complex arr[3]={Complex (5,6)};
Complex* arr2=new Complex[3]{Complex (50,60)};
    arr[0].setReal(20);
    arr[1].setImg(10);
    for(i=0;i<3;i++)
        arr[i].print();
    arr2[0].setReal(20);
        for(i=0;i<3;i++)
        arr2[i].print();
 return 0;
}








int main1()
{
Complex c1(4,9),c2(5,6),c3,c4(1,2),c5(10,10);
int x=5;
x=(int)c1;
cout<<x<<endl;
c2=c1++; //postfix
//c2=++c1;//prefix
c1.print();
c2.print();
//c3.print();

//c3=c1.add(c2);
//c3=c1+c2;
//c3= c1+3;
//c3= 3+c1;
//c3=c1+=c2;
if (c1==c2)
{
    cout<<" Equals";
}
else
{
cout<<" not Equals";

}
c1.print();
c2.print();
c3.print();
    return 0;
}
