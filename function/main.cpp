#include <iostream>
#include <string.h>
using namespace std;

class emp
{
    int id;
    int age;
    char name[10];
public:
    void setId (int _id)
    {
        id=_id;

    }
    int getId()
    {
        return id;
    }

    void setAge (int _age)
    {
        age=_age;
    }
    int getAge()
    {
        return age;
    }


    void setName (char* _name)
    {
        strcpy(name,_name);
    }
    char*getName()
    {
        return name;
    }

    void print_emp()
    {
        cout<<id<<":"<<age<<":"<<name<<endl;
    }

};
void print_emp(emp e1);
int main()
{
    emp e1;
    e1.setId(30);
    e1.setName("Ahmed");
    e1.setAge(20);
    e1.print_emp();
    cout<<"\n===================\n";
    print_emp(e1);
    return 0;
}
void print_emp(emp e1)
{
    cout<<e1.getId()<<":"<<e1.getAge()<<":"<<e1.getName()<<endl;
}
