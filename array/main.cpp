#include <iostream>
using namespace std;

int main()
{
int size;
int i;
cin>>size;
int *ptr=new int[size];
for(i=0;i<size;i++)
    cin>>ptr[i];
for(i=0;i<size;i++)
    cout<<ptr[i];
    return 0;
}
