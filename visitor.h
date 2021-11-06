#ifndef _VISITOR
#define _VISITOR


#include "jpg.h"
#include "mp3.h"
#include "mp4.h"



class Visitor
{
public:
    virtual void visitMP3(const MP3 *mp3) = 0;
    virtual void visitMP4(const MP4 *mp4) = 0;
    virtual void visitJPG(const JPG *jpg) = 0;
};

#endif