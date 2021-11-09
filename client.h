/*! \file client.h
 *  Describe the class Client
 *  \author Dylan
 *  \date 09/11/2021
*/
#ifndef _CLIENT
#define _CLIENT


#include "visitor.h"
#include "multimediaelement.h"
#include <vector>

/*! \class Client
 *  Class Client
*/
class Client
{
public:
    Client(); //!< Default constructor of Client
    void displayMultimedia(std::vector<const MultimediaElement *> elements, Visitor *visitor); //!< Method to visit every MultimediElement of a vector with a specific visitor
};
#endif