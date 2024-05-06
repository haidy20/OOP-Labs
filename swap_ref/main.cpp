#include <iostream>
#include <string.h>
using namespace std;
//calling by ref
void swap(int &a,int &b);
int main(){
 int x=10;
 int y=20;
 swap(x,y);
cout <<x<<","<<y;

return 0;
}
void swap(int &a,int &b)
{
int temp=a;
a=b;
b=temp;
}
