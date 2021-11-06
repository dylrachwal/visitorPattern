#ifndef _SPECTROGRAPHVISITOR
#define _SPECTROGRAPHVISITOR

#include "visitor.h"


class SpectrographVisitor : public Visitor
{
public:
    SpectrographVisitor();
    void visitMP3(const MP3 *mp3) override;
    void visitMP4(const MP4 *mp4);
    void visitJPG(const JPG *jpg);
};

#endif