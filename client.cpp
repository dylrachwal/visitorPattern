#include <iostream>
#include "client.h"
#include "multimediaelement.h"
#include "showvisitor.h"
#include <array>



Client::Client()
{
	std::cout << "client created " << std::endl;
}


void Client::displayMultimedia(std::array<const MultimediaElement *, 2> elements, ShowVisitor *visitor)
{	
	for (const MultimediaElement *element : elements) {
    	element->accept(visitor);
	};
}
