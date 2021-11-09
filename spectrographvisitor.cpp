/*! \file spectrographvisitor.cpp
 *  Implement the methods of the class SpectrographVisitor
 *  \author Dylan
 *  \date 09/11/2021
*/
#include <iostream>
#include "spectrographvisitor.h"
#include "mp3.h"
#include "mp4.h"
#include "jpg.h"



void SpectrographVisitor::visitMP3(const MP3 *mp3) 
{
    std::cout << "showing specter of " << mp3->getName() << std::endl;
}

void SpectrographVisitor::visitMP4(const MP4 *mp4)
{
    std::cout << "showing specter of " << mp4->getName() << std::endl;
}

void SpectrographVisitor::visitJPG(const JPG *jpg)
{
    std::cout << "showing specter of " << jpg->getName() << std::endl;
}
