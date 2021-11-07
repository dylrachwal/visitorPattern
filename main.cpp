#include <iostream>
#include "client.h"
#include "visitor.h"
#include "multimediaelement.h"
#include "jpg.h"
#include "mp3.h"
#include "mp4.h"


#include "showvisitor.h"
using namespace std;

int main(int argc, char* argv[])
{
    Client C;
    JPG jpg("jpg", 6, 7);
    MP3 mp3("mp3", 5.5);
    MP4 mp4("mp4", 42, 4.2);
    ShowVisitor *showVisitor;
    C.displayMultimedia(mp3, showVisitor);

    return 0;
}