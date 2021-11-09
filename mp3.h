/*! \file mp3.h
 *  Describe the class MP3
 *  \author Dylan
 *  \date 09/11/2021
*/
#ifndef _MP3
#define _MP3

#include "multimediaelement.h"
#include <iostream>


/*! \class MP3
 *  Class MP3 to represent a simple form a mp3
*/
class MP3 : public MultimediaElement {
private :
    double duration; //!< duration of a MP3
public :
	MP3(std::string name, double duration); //!< Constructor of a MP3 with a specif name and duration
    void accept(Visitor *v) const override; //!< Method to allow the visitor to use the object MP3
    double getDuration() const; //!< Method to get the Duration of a MP3
};

#endif