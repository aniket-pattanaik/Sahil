#include <iostream>
using namespace std;
class student
{
    protected:
    string name;
    int roll;
    public:
    void setstudent(string n,int r){
    name  = n;
    roll = r;
}
};
class Test:public student
{
    int m1,m2,m3;
    public:
    void setMarks(int a,int b,int c)
    {
        m1 = a;
        m2 = b;
        m3 = c;
    }
    void show()
    {
        cout <<"name"<<name<<"roll"<<roll<<
    }
}
class Result : public Test 
{
public:
    void display() 
    {
        int total = m1 + m2 + m3;
        cout << "Name: " << name << "\nRoll: " << roll
             << "\nMarks: " << m1 << ", " << m2 << ", " << m3
             << "\nTotal: " << total << endl;
    }
};
void display()
{
     int total = m1 + m2 + m3;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Total Marks: " << total << endl;
    }
int main() 
{
    Result r;
    r.setStudent("Aniket", 101);
    r.setMarks(85, 90, 80);
    r.display();  
    return 0;
}
