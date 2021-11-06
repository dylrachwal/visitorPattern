#ifndef _MP3
#define _MP3

#include "multimediaelement.h"
#include "visitor.h"
#include <iostream>
using namespace std;

class Visitor;

class MP3 : public MultimediaElement {
private :
    double duration;
public :
	MP3(string name, double duration);
    ~MP3();
    void accept(Visitor *v) const;
    double getDuration() const;
};

#endif