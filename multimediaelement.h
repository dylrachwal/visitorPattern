/*! \file multimediaelement.h
 *  Describe the abstract class MultimediaElement
 *  \author Dylan
 *  \date 09/11/2021
*/

#ifndef _MULTIMEDIAELEMENT
#define _MULTIMEDIAELEMENT

#include <iostream>


class Visitor;

/*! \class MultimediaElement
 *  Abstract Class MultimediaElement in order to not be instancied and force every child to implement a method to accept any Visitor a
*/
class MultimediaElement 
{
protected :
    std::string name; //!< Name of the MultimediaElement
public:
    virtual void accept(Visitor *v) const=0; //!< Abstract Method to allow any visitor and for the child to implements this method
    std::string getName() const; //!< Method to get the name of the MultimediaElement
};


#endif