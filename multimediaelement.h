#ifndef _MULTIMEDIAELEMENT
#define _MULTIMEDIAELEMENT

#include "visitor.h"
#include <iostream>
using namespace std;

class Visitor;

class MultimediaElement 
{
protected :
    string name;
public:
    MultimediaElement();
    virtual void accept(Visitor *v) const = 0;
    string getName();
};


#endif