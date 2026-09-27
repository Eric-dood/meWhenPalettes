//COMSC-210 | Lab 14 | Eric-Giulio Hedes
#include <iomanip>
#include <iostream>
using namespace std;

const int SIZE = 25;

class Color
{
    private:
        int red, green, blue;
    public:
        //getter functions
        int getRed() { return red; }
        int getGreen() { return red; }
        int getBlue() { return blue; }
        //setter functions
        void setRed(int val) { red = val; }
        void setGreen(int val) { green = val; }
        void setBlue(int val) { blue = val; }
        //print function
        void print();
};

int main()
{
    srand(time(0));

    Color col[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        col[i].setRed((int)(rand() % 255));
        col[i].setGreen((int)(rand() % 255));
        col[i].setBlue((int)(rand() % 255));
    }

    for (int j = 0; j < SIZE; j++)
        col[j].print();
}

void Color::print() {
    cout << "Color: " << getRed() << ", " << getGreen() << ", " << getBlue() << endl;
}