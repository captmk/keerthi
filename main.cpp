#include <iostream>
using namespace std;
// Base class
class Shape {
public:
    int width;
    int height;
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
};

// Derived class
class Rectangle: public Shape {
public:
    int getArea() {
        return (width * height);
    }
};

int main() {
    Rectangle rect;
    rect.setWidth(4);
    rect.setHeight(10);
    cout << "Total area: " << rect.getArea() << endl;
    return 0;
}
