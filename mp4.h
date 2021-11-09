/*! \file mp4.h
 *  Describe the class MP4
 *  \author Dylan
 *  \date 09/11/2021
*/

#ifndef _MP4
#define _MP4

#include "multimediaelement.h"
#include <iostream>


/*! \class MP4
 *  Class MP4 to represent a simple form a mp4
*/
class MP4 : public MultimediaElement {
private :
    int size; //!< Size of a MP4
    double duration; //!< Duration of a MP4
public :
	MP4(std::string name, int size, double duration); //!< Constructor of a MP4 with a specific name, size and duration
    void accept(Visitor *v) const override; //!< Method to allow the visitor to use the object MP4
    int getSize() const; //!< Method to get the Size of a MP4
    double getDuration() const; //!< Method to get the Duration of a MP4

};
#endif