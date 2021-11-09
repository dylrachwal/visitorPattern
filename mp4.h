#ifndef _MP4
#define _MP4

#include "multimediaelement.h"
#include <iostream>

class MP4 : public MultimediaElement {
private :
    int size;
    double duration;
public :
	MP4(std::string name, int size, double duration);
    void accept(Visitor *v) const override;
    int getSize() const;
    double getDuration() const;

};
#endif