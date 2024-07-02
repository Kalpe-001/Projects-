/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Time
{
    private:
    int hour,minute,second;
    public:
    Time(){}
    Time(int h,int m,int s):hour(h),minute(m),second(s){}
    Time operator+(Time t)
    {
        Time temp;
        
        temp.hour=hour+t.hour;
        temp.minute=minute+t.minute;
        temp.second=second+t.second;
        while(temp.second>=60)
        {
            temp.minute++;
            temp.second=temp.second-60;
        }
        while(temp.minute>=60)
        {
            temp.hour++;
            temp.minute=temp.minute-60;
        }
        return temp;
    }
    
    void display()
    {
        cout<<"Time: "<<hour<<":"<<minute<<":"<<":"<<second<<endl;
    }
};
int main()
{
    Time t1(1,23,45),t2(2,34,23),t3;
    t3=t1+t2;
    
    t1.display();
    t2.display();
    t3.display();

    return 0;
}
