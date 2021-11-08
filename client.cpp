#include <iostream>
#include "client.h"
#include "multimediaelement.h"
#include "visitor.h"
#include <vector>



Client::Client()
{
	std::cout << "client created " << std::endl;
}


void Client::displayMultimedia(std::vector<const MultimediaElement *> elements, Visitor *visitor)
{	
	for (const MultimediaElement *element : elements) {
    	element->accept(visitor);
	};
}
