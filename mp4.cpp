#include <iostream>
#include "mp4.h"
#include "visitor.h"



MP4::MP4(std::string name, int size, double duration)
{
    this->name = name;
    this->size = size;
    this->duration = duration;
}


void MP4::accept(Visitor *v) const 
{
    std::cout<<"MP4 Element accepted Visitor" << std::endl;
    v->visitMP4(this);
}

double MP4::getDuration() const 
{
    return duration;
}

int MP4::getSize() const {
    return size;
}
