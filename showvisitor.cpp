#include <iostream>
#include "showvisitor.h"
#include "mp3.h"
#include "mp4.h"
#include "jpg.h"

using namespace std;


ShowVisitor::ShowVisitor()
{
    this->nbElementDisplayed =0;
}

void ShowVisitor::visitMP3(const MP3 *mp3) 
{
    cout<<"showing MP3" << endl;
    cout << "the file is named " << mp3->getName() <<endl;
    cout << "the duration is " << mp3->getDuration() << endl;
    cout << "closing MP3" << endl;
    nbElementDisplayed++;
}

void ShowVisitor::visitMP4(const MP4 *mp4) 
{
    cout<<"showing MP4" << endl;
    cout << "the file is named " << mp4->getName() <<endl;
    cout << "the size is " << mp4->size() << "and the duration is " << mp4->getDuration() << endl;
    cout << "closing MP4" << endl;
    nbElementDisplayed++;
}

void ShowVisitor::visitJPG(const JPG *jpg) 
{
    cout<<"showing JPG" << endl;
    cout << "the file is named " << jpg->getName() <<endl;
    cout << "the coordinates are " << jpg->getCoordinates() << endl;
    cout << "closing JPG" << endl;
    nbElementDisplayed++;
}
