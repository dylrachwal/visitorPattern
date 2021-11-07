#include <iostream>
#include "mp4.h"
#include "visitor.h"


using namespace std;

MP4::MP4(string name, int size, double duration)
{
    this->name = name;
    this->size = size;
    this->duration = duration;
}


void MP4::accept(Visitor *v) const 
{
    cout<<"MP4 Element accepted Visitor" << endl;
    v->visitMP4(this);
}

double MP4::getDuration() const 
{
    return this->duration;
}

int MP4::getSize() const {
    return this->size;
}
