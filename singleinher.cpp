#include <iostream>
using namespace std;
class Student {
public:
    int roll;
    void getRoll() {
        cout<<"Enter Roll Number: ";
        cin>>roll;
    }
};
class Result : public Student {
public:
    int marks;
    void getMarks() {
        cout<<"Enter Marks: ";
        cin>>marks;
    }
    void display() {
        cout<<"\nRoll Number: "<< roll;
        cout<<"\nMarks: "<< marks;
    }
};
int main() {
    Result r;       
    r.getRoll();    
    r.getMarks();    
    r.display();    
    return 0;
}