#ifndef _CLIENT
#define _CLIENT

#include "visitor.h"
#include "multimediaelement.h"


class Client
{
private :
	Visitor *visitor;	
public:
    Client();
    void createShow();
    void displayMultimedia(const MultimediaElement m);
    void displaySpectre(const MultimediaElement m);
};
#endif