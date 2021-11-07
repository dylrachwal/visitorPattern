#ifndef _MULTIMEDIAELEMENT
#define _MULTIMEDIAELEMENT

#include <iostream>


class Visitor;

class MultimediaElement 
{
protected :
    std::string name;
public:
    virtual void accept(Visitor *v) const {};
    std::string getName() const;
};


#endif