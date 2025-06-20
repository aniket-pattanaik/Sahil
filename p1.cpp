#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;
public:
    void get_data() {
        cin >> x >> y;
    }
    virtual void display_area() {
        cout << "Base class display\n";
    }
};

class Triangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Triangle: " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Rectangle: " << x * y << endl;
    }
};

int main() {
    Shape* s;
    Triangle t;
    Rectangle r;
    int choice;
    cout << "1.Triangle  2.Rectangle: ";
    cin >> choice;
    s = (choice == 1) ? (Shape*)&t : (Shape*)&r;
    cout << "Enter two values: ";
    s->get_data();
    s->display_area();
    return 0;
}
