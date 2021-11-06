#ifndef _SHOWVISITOR
#define _SHOWVISITOR

#include "visitor.h"



class ShowVisitor : public Visitor
{
public:
    ShowVisitor();
    void visitMP3(MP3 mp3);
    void visitMP4(MP4 mp4);
    void visitJPG(JPG jpg);
};

#endif