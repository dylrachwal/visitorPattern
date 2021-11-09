/*! \file visitor.h
 *  Describe the interface Visitor
 *  \author Dylan
 *  \date 09/11/2021
*/
#ifndef _VISITOR
#define _VISITOR


#include "jpg.h"
#include "mp3.h"
#include "mp4.h"

/*! \class Visitor
 *  Interface Visitor used by any MultimediaElement
 *  \brief Interface in order to not be instancied and to force every Visitor to implements a method for every child of MultimediaElement
*/
class Visitor
{
public:
    virtual void visitMP3(const MP3 *mp3){}; //!<
    virtual void visitMP4(const MP4 *mp4){}; //!<
    virtual void visitJPG(const JPG *jpg){}; //!<
};

#endif