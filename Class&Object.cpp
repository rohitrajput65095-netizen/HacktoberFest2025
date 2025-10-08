#include <iostream>

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    int calculateArea() const {
        return width * height;
    }

    void displayDimensions() const {
        std::cout << "Rectangle Dimensions: " << width << " x " << height << std::endl;
    }
};

int main() {
    Rectangle rect(10, 5);

    rect.displayDimensions();
    int area = rect.calculateArea();
    std::cout << "Area: " << area << std::endl;

    return 0;
}
