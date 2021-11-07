#ifndef _JPG
#define _JPG

#include "multimediaelement.h"
#include <iostream>

class Visitor;

class JPG : public MultimediaElement {
private :
    int width;
    int length;
public :
	JPG(std::string name, int width, int length);
    void accept(Visitor *v) const;
    int getLength() const;
    int getWidth() const;
    int getCoordinates() const;

};

#endif