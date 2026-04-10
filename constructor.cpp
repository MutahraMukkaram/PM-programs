#include <iostream>
using namespace std;
class Box
{
    float length, width, height;
public:
    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;
    }
    void area()
    {
        float A = length * width;
        cout<<"Area of Rectangular Box = "<< A<<endl;
    }
    void volume()
    {
        float V = length * width * height;
        cout<<"Volume of Rectangular Box = "<<V<<endl;
    }
};
int main()
{
    float l, w, h;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter width: ";
    cin>>w;
    cout<<"Enter height: ";
    cin>>h;
    Box b(l, w, h);
    b.area();
    b.volume();
    return 0;
}