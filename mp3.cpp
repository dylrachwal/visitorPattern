/*! \file mp3.cpp
 *  Implement the methods of the class MP3
 *  \author Dylan
 *  \date 09/11/2021
*/
#include <iostream>
#include "mp3.h"
#include "visitor.h"



MP3::MP3(std::string name, double duration)
{
    this->name = name;
    this->duration = duration;
}

void MP3::accept(Visitor *v) const
{
    std::cout<<"MP3 Element accepted Visitor" << std::endl;
    v->visitMP3(this);
}

double MP3::getDuration() const
{
    return duration;
}
