#ifndef _SPECTROGRAPHVISITOR
#define _SPECTROGRAPHVISITOR

#include "visitor.h"

class MP3;
class MP4;
class JPG;


class SpectrographVisitor : public Visitor
{
public:
    void visitMP3(const MP3 *mp3) override;
    void visitMP4(const MP4 *mp4) override;
    void visitJPG(const JPG *jpg) override;
};

#endif