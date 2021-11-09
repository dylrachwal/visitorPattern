#include <iostream>
#include "showvisitor.h"
#include "mp3.h"
#include "mp4.h"
#include "jpg.h"


ShowVisitor::ShowVisitor()
{
    this->nbElementDisplayed =0;
}

void ShowVisitor::visitMP3(const MP3 *mp3) 
{
    std::cout << "showing MP3" << std::endl;
    std::cout << "the file is named " << mp3->getName() <<std::endl;
    std::cout << "the duration is " << mp3->getDuration() << std::endl;
    std::cout << "closing MP3" << std::endl;
    nbElementDisplayed++;
}

void ShowVisitor::visitMP4(const MP4 *mp4)
{
    std::cout << "showing MP4" << std::endl;
    std::cout << "the file is named " << mp4->getName() <<std::endl;
    std::cout << "the size is " << mp4->getSize() << "and the duration is " << mp4->getDuration() << std::endl;
    std::cout << "closing MP4" << std::endl;
    nbElementDisplayed++;
}

void ShowVisitor::visitJPG(const JPG *jpg)
{
    std::cout << "showing JPG" << std::endl;
    std::cout << "the file is named " << jpg->getName() <<std::endl;
    std::cout << "the coordinates are " << jpg->getLength() << "," << jpg->getWidth() << std::endl;
    std::cout << "closing JPG" << std::endl;
    nbElementDisplayed++;
}

int ShowVisitor::getNbElementDisplayed()
{
    return nbElementDisplayed;
}