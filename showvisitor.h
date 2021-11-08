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
    void visitMP3(const MP3 *mp3) override;
    void visitMP4(const MP4 *mp4) override;
    void visitJPG(const JPG *jpg) override;
    int getNbElementDisplayed();
};

#endif