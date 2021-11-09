/*! \file jpg.h
 *  Describe the class JPG
 *  \author Dylan
 *  \date 09/11/2021
*/
#ifndef _JPG
#define _JPG

#include "multimediaelement.h"
#include <iostream>


/*! \class JPG
 *  Class JPG to represent a simple form a jpg
*/
class JPG : public MultimediaElement {
private :
    int width; //!< Width of JPG
    int length; //!< Length of JPG
public :
	JPG(std::string name, int width, int length); //!< Constructor of JPG with a specific name, width and length.
    void accept(Visitor *v) const override; //!< Method to allow the visitor to use the object JPG
    int getLength() const; //!< MEthod to get the length
    int getWidth() const; //!<  Method to get the width
};

#endif