#include <iostream>
#include "showvisitor.h"
#include "mp4.h"
#include "jpg.h"
#include "mp3.h"
using namespace std;

void ShowVisitor::visitMP3(const MP3 *mp3) override
{
    cout<<"showing MP3" << endl;
    cout << "the file is named " << mp3.getName() <<endl;
    cout << "the duration is " << mp3.getDuration() << endl;
    cout << "closing MP3" << endl;
}

void ShowVisitor::visitMP4(const MP4 *mp4) override
{
    cout<<"showing MP4" << endl;
    cout << "the file is named " << mp4.getName() <<endl;
    cout << "the size is " << mp4.size() << "and the duration is " << mp4.getDuration() << endl;
    cout << "closing MP4" << endl;
}

void ShowVisitor::visitJPG(const JPG *jpg) override
{
    cout<<"showing JPG" << endl;
    cout << "the file is named " << mp4.getName() <<endl;
    cout << "the coordinates are " << jpg.getCoordinates() << endl;
    cout << "closing JPG" << endl;
}
