#include <iostream>
#include <string.h>
using namespace std;

class emp
{
int id;
char name[30];
int age;
 public:
    emp()
    {
    id=0;
    strcpy(name,"No Name here!");
    age=0;
    cout<<"Default"<<endl;
    }
    emp(int _id,char* _name,int _age)
    {
    id=_id;
    strcpy(name,_name);
    age=_age;
    cout<<"Parameter"<<endl;

    }
   void setId(int _id)
   {
       id= _id;
   }
   int getId()
   {
       return id;
   }

   void setName(char* _name)
   {
     strcpy(name,_name);
   }
   char* getName()
   {
       return name;
   }

   void setAge(int _age)
   {
       age= _age;
   }
   int getAge()
   {
       return age;
   }

    void print()
    {
        cout<<id<<":"<<name<<":"<<age<<endl;
    }
};

  int main()
{
    emp e1;
    emp e2(20,"haidy",23);
    e1.print();
    e2.print();
    return 0;
}
















