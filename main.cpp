#include <iostream>
#include <iomanip>

using namespace std;

class Color {
    int red;
    int green;
    int blue;

    public:
    int getRed() const;
    int getGreen() const;
    int getBlue() const;
    void setRed(int);
    void setGreen(int);
    void setBlue(int);
    void print();
};

// Would be more proper to make inline functions, coded this way to practice syntax
int Color::getRed() const {
    return red;
}

int Color::getGreen() const {
    return green;
}

int Color::getBlue() const {
    return blue;
}

void Color::setRed(int red) {
    this->red = red;
}

void Color::setGreen(int green) {
    this->green = green;
}

void Color::setBlue(int blue) {
    this->blue = blue;
}

void Color::print() {
    cout << setw(10) << "Red:" << setw(5) << this->red;
    cout << setw(10) << "Green:" << setw(5) << this->green;
    cout << setw(10) << "Blue:" << setw(5) << this->blue;
    cout << endl;
}