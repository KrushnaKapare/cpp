#include <iostream>
using namespace std;
// add accept() function

// base class
// parent class
class person
{
    protected:
        string name;
        int age;
    public:
    person()
    {
        name ="Krushna";
        age = 23;
    }
    void print_person()
    {
        cout<<"name = "<<name <<" age = "<<age<<"\n";
    }
    virtual void accept()
    {
        cout<<"Enter name and age\n";
        cin>>name>>age;
    }
    bool can_vote()
    {
        if(age >= 18)
            return true;
        else    
            return false;
    }
};

// emp is-a person
// derived class
// child class

class emp : public person
{
    int sal;
    int empid;
    public:
    emp()
    {
        sal = 40000;
        empid = 1234;
    }
    void print_emp()
    {
        this->print_person();
        cout<< " sal ="<< sal<<" empid = "<<empid<<"\n";
    }
    void accept()
    {
        cout<<"Enter name and age\n";
        cin>>name>>age;
        cout<<"Enter sal and empid\n";
        cin>>sal>>empid;
    }
    void updateName(string name1)
    {
        name = name1;
    }

};

int main()
{
    
    emp e1;
    person *pptr = NULL;
    pptr = &e1;
    pptr->accept();
    pptr->print_person();
    pptr->can_vote();


    // object slicing 

    // person p2;
    // emp e2;
    // p2 = e2;
    

    return 0;
}