#include <iostream>
#include <string.h>

using namespace std;
class Person
{

protected:
    int id;
    char name[20];
    int age;

public:

    Person ()
    {
        id = -1;
        strcpy(name,"no name");
        age = 0;
        cout<<" \n parent parameterless cotr";
    }

    Person (int _id, char* _name)
    {
        id = _id;
        strcpy(name, _name);
        age = 0;
        cout<<" \n parent two cotr";
    }
    Person (int _id, char* _name, int _age)
    {
        id = _id;
        strcpy(name, _name);
        age = _age;
    }
    void setId (int _id)
    {
        id=_id;
    }
    void setName (char*_name)
    {
        strcpy (name, _name);
    }
    void setAge (int _age)
    {
        age=_age;
    }

    int getId()
    {
        return id;
    }
    int getAge()
    {
        return age;
    }
    char* getName ()
    {
        return name;
    }
    void print ()
    {

        cout<< "\n id : "<< id<< "\n name : "<< name << "\n age :"<< age;
    }

};

class Student: public Person
{
    char grade;

public:
    Student ()
    {
        grade='a';
        cout<<"\n Emp parameterless cotr";
    }
    Student(int _id, char*_name): Person (_id, _name)
    {
        grade='a';
        cout<<" \n Student two param cotr";
    }
    Student(int _id, char*_name, int _age): Person (_id, _name, _age)
    {
        grade='a';
        cout<<" \n Student  three param cotr";
    }
    Student(int _id, char*_name, int _age, char _grade): Person (_id, _name, _age)
    {
        grade='a';
        cout<<" \n Student  four param cotr with grade";
    }

    void setGrade (char _grade)
    {
        grade = _grade;
    }
    char getGreade ()
    {
        return grade;
    }
    void printStudent()
    {
        cout<< endl;
        cout<<" \n student data:\n ";
        print();
        cout<< "\n Grade :"<< grade;
    }
};

class Emp: public Person
{

    int salary;

public:
    Emp()
    {
        salary=3000;
        cout<<"\n Emp parameterless cotr";
    }
    Emp(int _id, char*_name): Person (_id, _name)
    {
        salary=3000;
        cout<<"\n emp two param cotr";
    }
    Emp(int _id, char*_name, int _age): Person (_id, _name, _age)
    {           salary=3000;

        cout<<" \n emp three param cotr";
    }
    Emp(int _id, char*_name, int _age, int _salary): Person (_id, _name, _age)
    {          salary=3000;

        cout<<" \n emp four param cotr with salary";
    }

    void setSalary (int _salary)
    {
        salary = _salary;
    }
    int getSalary ()
    {
        return salary;
    }

    void printEmp()
    {
        cout<< endl;
        cout<<" \n Employee data:";
        print();
        cout<< "\n Salary :"<< salary;
    }
};

int main()
{
    Student s1(10,"Ali",20), s2;
    s2.setGrade('d');

    s2.printStudent();
    s1.printStudent();


    Emp e1(10,"Ahmed",30);
    e1.setSalary(5000);
    e1.printEmp();
    // s1.setId(8);
    //s1.setName("ali");
    //  s1.setAge(15);

    return 0;
}
