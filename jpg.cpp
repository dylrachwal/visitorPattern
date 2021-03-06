/*! \file jpg.cpp
 *  Implement the methods of the class JPG
 *  \author Dylan
 *  \date 09/11/2021
*/
#include <iostream>
#include "jpg.h"
#include "visitor.h"


JPG::JPG(std::string name, int width, int length)
{
    this->name = name;
    this->width = width;
    this->length = length;
}
/*! Method accept
 *  \param v pointer of a visitor object that will conserve the real child class (for instance showvisitor) 
*/
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
