//COMSC-210 | Lab 14 | Eric-Giulio Hedes
#include <iomanip>
#include <iostream>
using namespace std;

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
};