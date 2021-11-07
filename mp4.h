#ifndef _MP4
#define _MP4

#include "multimediaelement.h"
#include <iostream>
class Visitor;

class MP4 : public MultimediaElement {
private :
    int size;
    double duration;
public :
	MP4(std::string name, int size, double duration);
    void accept(Visitor *v) const;
    int getSize() const;
    double getDuration() const;

};
#endif