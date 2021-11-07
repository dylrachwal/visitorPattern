#ifndef _CLIENT
#define _CLIENT


#include "showvisitor.h"
#include "multimediaelement.h"
#include <array>


class Client
{
private :
	Visitor *visitor;	
public:
    Client();
    void createShow();
    void displayMultimedia(std::array<const MultimediaElement *, 2> elements, ShowVisitor *visitor);
};
#endif