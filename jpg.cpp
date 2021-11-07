#include <iostream>
#include "jpg.h"
#include "visitor.h"


JPG::JPG(std::string name, int width, int length)
{
    this->name = name;
    this->width = width;
    this->length = length;
}
void JPG::accept(Visitor *v) const
{
    std::cout<<"JPG Element accepted Visitor"<<std::endl;

    v->visitJPG(this);
}
int JPG::getWidth() const
{
    return width;
}
int JPG::getLength() const
{
    return length;
}
int JPG::getCoordinates() const
{
    int coordinates[2];
    coordinates[0]=width;
    coordinates[1]=length;
    return *coordinates;
}
