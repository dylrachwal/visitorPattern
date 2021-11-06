#include <iostream>
#include "spectrographvisitor.h"
#include "mp4.h"
#include "jpg.h"
#include "mp3.h"

using namespace std;

void SpectrographVisitor::visitMP3(const MP3 *mp3) override
{
    cout<<"visiting MP3" << endl;
}

void SpectrographVisitor::visitMP4(const MP4 *mp4) override
{
    cout<<"visiting MP4" << endl;
}


void SpectrographVisitor::visitJPG(const JPG *jpg) override
{
    cout<<"visiting JPG" << endl;
}
