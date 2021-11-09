/*! \file showvisitor.h
 *  Describe the class ShowVisitor
 *  \author Dylan
 *  \date 09/11/2021
*/
#ifndef _SHOWVISITOR
#define _SHOWVISITOR

#include "visitor.h"


/*! \class ShowVisitor
 *  Class ShowVisitor that displays every child of MultimediaElement
*/
class ShowVisitor : public Visitor
{
private :
    int nbElementDisplayed; //!< number of elements that have been displayed since the creation of this Visitor 
public:
    ShowVisitor(); //!< Default Constructor of the ShowVisitor
    void visitMP3(const MP3 *mp3) override; //!<
    void visitMP4(const MP4 *mp4) override; //!<
    void visitJPG(const JPG *jpg) override; //!<
    int getNbElementDisplayed(); //!< Method the get the number of Elements displayed
};

#endif