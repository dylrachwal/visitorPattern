#ifndef _SHOWVISITOR
#define _SHOWVISITOR

#include "visitor.h"

class MP3;
class MP4;
class JPG;


class ShowVisitor : public Visitor
{
private :
    int nbElementDisplayed;
public:
    ShowVisitor();
    void visitMP3(MP3 *mp3) ;
    void visitMP4(MP4 *mp4) ;
    void visitJPG(JPG *jpg) ;
};

#endif