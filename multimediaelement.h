#ifndef _MULTIMEDIAELEMENT
#define _MULTIMEDIAELEMENT

#include "visitor.h"
#include <iostream>
using namespace std;

class MultimediaElement 
{
protected :
    string name;
public:
    virtual void accept(Visitor *v) const = 0;
    string getName();
};


#endif