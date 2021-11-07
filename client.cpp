#include <iostream>
#include "client.h"
#include "multimediaelement.h"
#include "showvisitor.h"



Client::Client()
{
	std::cout << "client created " << std::endl;
}


void Client::displayMultimedia(const MultimediaElement &m, ShowVisitor *visitor)
{
	m.accept(visitor);
}
