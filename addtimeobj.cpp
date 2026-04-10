#include <iostream>
using namespace std;
class Time
{
    int h, m, s;
public:
    void input()
    {
        cout<<"Enter hours: ";
        cin>>h;
        cout<<"Enter minutes: ";
        cin>>m;
        cout<<"Enter seconds: ";
        cin>>s;
    }
    Time add(Time t)
    {
        Time temp;
        temp.s=s+t.s;
        temp.m=m+t.m;
        temp.h= h+t.h;
        if (temp.s >= 60)
        {
            temp.s-=60;
            temp.m++;
        }
        if (temp.m>=60)
        {
            temp.m-=60;
            temp.h++;
        }

        return temp;
    }
    void display()
    {
        cout <<h<<" hours "
             <<m<<" minutes "
             << s <<" seconds"<< endl;
    }
};
int main()
{
    Time t1, t2, t3;
    cout<<"Enter first time:" << endl;
    t1.input();
    cout<<"Enter second time:"<<endl;
    t2.input();
    t3 = t1.add(t2);
   cout<<"\nResultant Time after addition: ";
    t3.display();
    return 0;
}