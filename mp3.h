#ifndef _MP3
#define _MP3

#include "multimediaelement.h"
#include <iostream>


class MP3 : public MultimediaElement {
private :
    double duration;
public :
	MP3(std::string name, double duration);
    void accept(Visitor *v) const override;
    double getDuration() const;
};

#endif