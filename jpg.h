#ifndef _JPG
#define _JPG

#include "multimediaelement.h"
#include "visitor.h"
#include <iostream>
using namespace std;

class JPG : public MultimediaElement {
private :
    int width;
    int length;
public :
	JPG(string name, int width, int length);
    ~JPG();
    void accept(Visitor *v) const;
    int getLength() const;
    int getWidth() const;
    int getCoordinates() const;

};

#endif