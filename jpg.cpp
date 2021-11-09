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
    std::cout<<"JPG Element accepted Visitor" <<std::endl;
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
