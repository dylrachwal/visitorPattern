#ifndef _CLIENT
#define _CLIENT


#include "showvisitor.h"
#include "multimediaelement.h"
#include <vector>


class Client
{
private :
	Visitor *visitor;	
public:
    Client();
    void createShow();
    void displayMultimedia(std::vector<const MultimediaElement *> elements, ShowVisitor *visitor);
};
#endif