#include "Rectangle.h"

void Rectangle::Create(int len, int wid)
{
    length = len;
    width = wid;
};

int Rectangle::Area()
{
    int area = 0;
    area = length*width;
};

