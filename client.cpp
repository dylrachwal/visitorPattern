/*! \file client.cpp
 *  Implement the methods of the class Client
 *  \author Dylan
 *  \date 09/11/2021
*/
#include <iostream>
#include "client.h"
#include "multimediaelement.h"
#include "visitor.h"
#include <vector>



Client::Client()
{
	std::cout << "client created " << std::endl;
}

/*! Method displayMultimedia
 *  \param elements vector of pointer of MultimediaElement in order to conserve the real child class but be general for the loop
 *  \param visitor pointer of Visitor in order to keep the real child class and execute a specific process but stay general for the loop
*/
void Client::displayMultimedia(std::vector<const MultimediaElement *> elements, Visitor *visitor)
{	
	for (const MultimediaElement *element : elements) {
    	element->accept(visitor);
	};
}
