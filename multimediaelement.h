#ifndef _MULTIMEDIAELEMENT
#define _MULTIMEDIAELEMENT

#include <iostream>
using namespace std;

class Visitor;

class MultimediaElement 
{
protected :
    string name;
public:
    virtual void accept(Visitor *v) const;
    string getName() const;
};


#endif