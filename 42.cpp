#include <iostream>
using namespace std;

class shape
{
    public:
    virtual void calculate_area()
    {
        cout<<"--------shape::calculate_area()--------\n";
    }
    virtual void input()
    {
        cout<<"-----------shape::input()-------------\n";
    }
};

class rectangle: public shape
{
    int l, b;
    public:
    void calculate_area()
    {
        int a = l * b;
        cout<<"Area of rectangle = "<<a<<"\n";

    }
    void input()
    {
        cout<<"Enter l and b for rectangle\n";
        cin>>l>>b;
    }
};

class circle : public shape
{
    int r;
    public:
    void calculate_area()
    {
        int a = 3.14 * r * r;
        cout<<"Area of circle = "<<a<<"\n";

    }
    void input()
    {
        cout<<"\n Enter radius (r) for circle\n";
        cin>>r;
    }  
};

int main()
{
    shape sp1;
    sp1.input();
    sp1.calculate_area();

    rectangle r1;
    r1.input();
    r1.calculate_area();

    circle c1;
    c1.input();
    c1.calculate_area();

    shape *sptr = NULL;
    rectangle r2;
    circle c2;
    int ch;

    do
    {
        cout<<"Enter choice \n1:rectangle\n2:circle\n0:Exit";
        cin>>ch;
        switch (ch)
        {
        case 1:
            sptr = &r2;
            break;
        case 2:
            sptr= &c1;
            break;
        }
        if(sptr != NULL)
        {
            sptr->input();
            sptr->calculate_area();

        }
        sptr = NULL;
    } while (ch != 0);
    cout<<"\n";
    return 0;
}