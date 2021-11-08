#include <iostream>
#include "client.h"
#include "multimediaelement.h"
#include "showvisitor.h"
#include <vector>



Client::Client()
{
	std::cout << "client created " << std::endl;
}


void Client::displayMultimedia(std::vector<const MultimediaElement *> elements, ShowVisitor *visitor)
{	
	for (const MultimediaElement *element : elements) {
    	element->accept(visitor);
	};
}
