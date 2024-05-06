#include <iostream>

using namespace std;
class parent{
    protected:
int x;
int y;
public:
    parent(int _x=0,int _y=0){
    x=_x;
    y=_y;
    }
void setx(int _x){
x=_x;
}
void sety(int _y){
y=_y;
}
void setparent(int _x,int _y){
    x=_x;
    y=_y;
}
int getx(){
return x;
}
int gety(){
return y;
}
 virtual void print(){
cout<<x<<":"<<y;

}
 virtual int add(){
return x+y;
}
virtual int mult(){
return x*y;

}
};
class child :public parent{
int z;
public:
    child(int _x,int _y,int _z):parent(_x,_y){

    z=_z;
    }
void print(){
parent::print();
cout<<":"<<z;

}
int add(){

return parent::add()+z;
}
int mult(){

return parent::mult()*z;
}

};
class child2 :public parent{
int z;
int a;
public:
    child2(int _x,int _y,int _z,int _a):parent(_x,_y){

    z=_z;
    a=_a;
    }
void print()
{
parent::print();
cout<<":"<<z<<":"<<a;

}
int add(){

return parent::add()+z+a;
}
int mult(){

return parent::mult()*z*a;
}

};
void myfun(parent *c){

  c->print();
}
void myfun2(parent *arr[],int size){
int sum=0;
int mul=1;
for(int i=0;i<size;i++){

    sum+=arr[i]->add();
    mul*=arr[i]->mult();
}
cout<<endl<<sum;
cout<<endl<<mul;
}

int main()
{
child c1(10,20,30);
myfun (&c1);
cout<<endl<<"======="<<endl;
parent p1(1,2);
child c3(2,4,6);
child2 c2(2,4,6,8);
parent *arr[3]={&p1,&c3,&c2};
myfun2(arr,3);
    return 0;
}
