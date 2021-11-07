#ifndef _CLIENT
#define _CLIENT

#include "showvisitor.h"
#include "multimediaelement.h"


class Client
{
private :
	Visitor *visitor;	
public:
    Client();
    void createShow();
    void displayMultimedia(const MultimediaElement &m, ShowVisitor *visitor);
};
#endif