/*! \file spectrographvisitor.h
 *  Describe the class SpectrographVisitor
 *  \author Dylan
 *  \date 09/11/2021
*/
#ifndef _SPECTROGRAPHVISITOR
#define _SPECTROGRAPHVISITOR

#include "visitor.h"


/*! \class SpectrographVisitor
 *  Class SpectrographVisitor that implements the "specter" for every child of MultimediaElement
*/
class SpectrographVisitor : public Visitor
{
public:
    void visitMP3(const MP3 *mp3) override; //!<
    void visitMP4(const MP4 *mp4) override; //!<
    void visitJPG(const JPG *jpg) override; //!<
}; 

#endif