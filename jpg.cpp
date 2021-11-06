#include <iostream>
#include "jpg.h"

using namespace std;

JPG::JPG(string name, int width, int length)
{
    this->name = name;
    this->width = width;
    this->length = length;
}
void JPG::accept(Visitor *v) const
{
    cout<<"JPG Element accepted Visitor" << endl;
    v->visitJPG(this);
}
int JPG::getWidth() const
{
    return this->width;
}
int JPG::getLength() const
{
    return this->length;
}
int JPG::getCoordinates() const
{
    int coordinates[2];
    coordinates[0]=this->width;
    coordinates[1]=this->length;
    return *coordinates;
}
