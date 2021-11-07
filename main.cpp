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
    std::array<const MultimediaElement *, 2> elements = {new JPG("jpg", 6, 7), new MP3("mp3", 5.5)};
    ShowVisitor *showVisitor;
    C.displayMultimedia(elements, showVisitor);

    return 0;
}