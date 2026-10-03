#include <iostream>
#include <iomanip>

using namespace std;

class Color {
    int red;
    int green;
    int blue;

    public:
    Color() { red = 0; green = 0; blue = 0; }
    Color(int r, int g, int b) { red = r; green = g; blue = b; }
    Color(int r) { red = r; }
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
    cout << setw(10) << "Red:" << setw(5) << this->getRed();
    cout << setw(10) << "Green:" << setw(5) << this->getGreen();
    cout << setw(10) << "Blue:" << setw(5) << this->getBlue();
    cout << endl;
}

int main() {
    const int NUM_COLORS = 3;
        int tempRed, tempGreen, tempBlue;
        cout << "red value of color #" << 1 << " is: ";
        cin >> tempRed;
        cout << "green value of color #" << 1 << " is: ";
        cin >> tempGreen;
        cout << "blue value of color #" << 1 << " is: ";
        cin >> tempBlue;
	Color color1(tempRed, tempGreen, tempBlue);

    cout << "\n\nDisplaying Colors\n\n";
    for (int i = 0; i < NUM_COLORS; ++i) {
        cout << "Color #" << (i + 1) << ":\n";
        colors[i].print();
        cout << endl << endl;
    }

    return 1;
}
