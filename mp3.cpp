#include <iostream>
#include "visitor.h"
#include "mp3.h"

using namespace std;

MP3::MP3(string name, double duration)
{
    this->name = name;
    this->duration = duration;
}

void MP3::accept(Visitor *v) const
{
    cout<<"MP3 Element accepted Visitor" << endl;
    v->visitMP3(this);
}

double MP3::getDuration() const
{
    return this->duration;
}
