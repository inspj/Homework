#include <stdio.h>
#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "Rectangle.cpp"
#include "Summation.h"
#include "Summation.cpp"
#include "Complex.h"

int main () {

    Rectangle best_rect;
    best_rect.Create (2, 3);
    cout << "The area of this rectangle is " << best_rect.Area() << endl;


    int x = 1;
    int y = 2;

    Summation lel(x,y);
    cout << lel.summ() << endl;

    int num1,num2,num3,num4;

    cout << "Write the real and imaginary part of the complex number respectively" << endl;
    cin >> num1;
    cin >> num2;
    Complex complex1(num1, num2);
    cout << "The first number is: " << complex1.real << " + " << complex1.imag << "i" << endl;

    cout << "Write the real and imaginary part of the complex number respectively" << endl;
    cin >> num3;
    cin >> num4;
    Complex complex2(num3, num4);
    cout << "The second number is: " << complex2.real << " + " << complex2.imag << "i" << endl;

    int real, imaginary;

    real = complex1.real + complex2.real;
    imaginary = complex1.imag + complex2.imag;

    cout << "The summation of real parts is " << real << endl;
    cout << "The summation of imaginary parts is " << imaginary << endl;



return 0;
}
