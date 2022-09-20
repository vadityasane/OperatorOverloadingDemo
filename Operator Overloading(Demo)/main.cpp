#include <iostream>

using namespace std;

class complex
{
public:         //data members
    int real;
    int img;

    complex /*add*/operator+(complex c) //operator overloading
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};

int main()
{
   complex c1,c2,c3;
    c1.real=5;
    c1.img=6;
    c2.real=15;
    c2.img=12;

    //c3=c1.add(c2);
    c3=c1+c2;           //operator overloading

    cout<<c3.real<<"+i"<<c3.img<<endl;

    return 0;
}
