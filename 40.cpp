#include <iostream>
using namespace std;

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
    bool can_vote()
    {
        if(age >= 18)
            return true;
        else    
            return false;
    }
};

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
    void updateName(string name1)
    {
        name = name1;
    }

};

int main()
{
    
    // person p1;
    // person *pptr = NULL;
    // pptr = &p1;
    // pptr->print_person();
    // pptr->can_vote();

    emp e1;
    emp *eptr = NULL;
    eptr = &e1;
    eptr->can_vote();
    eptr->print_person();
    eptr->print_emp();
    eptr->updateName("kk");
    eptr->print_person();
    eptr->print_emp();

    // emp e2;
    // person *pptr1 = NULL;
    // pptr1 = &e2;
    // pptr1->update_name("ram");
    // pptr1->print_emp();
    // pptr1->print_person();
    // pptr1->can_vote();
    return 0;
}