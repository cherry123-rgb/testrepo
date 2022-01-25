#include<iostream.h>
#include<conio.h>
using namespace std;
class complex{
 private:
     int a,b;
 public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"the sum is"<<temp;
    }
    friend complex operator+(complex,complex);

};
complex operator+(complex X,complex Y)
{
    complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return(temp);
}
int main()
{
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1+c2;
    c3.showdata();
    getch();
}
