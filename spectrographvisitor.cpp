#include <iostream>
#include "visitor.h"
#include "spectrographvisitor.h"
#include "mp4.h"
#include "jpg.h"
#include "mp3.h"


void SpectrographVisitor::visitMP3(const MP3 *mp3) 
{
    std::cout<<"visiting MP3" << std::endl;
}

void SpectrographVisitor::visitMP4(const MP4 *mp4) 
{
    std::cout<<"visiting MP4" << std::endl;
}


void SpectrographVisitor::visitJPG(const JPG *jpg) 
{
    std::cout<<"visiting JPG" << std::endl;
}
