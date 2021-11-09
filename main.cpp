/*! \file main.cpp
 *  Implements the scenario how to use the design pattern
 *  \author Dylan
 *  \date 09/11/2021
*/
#include <iostream>
#include "client.h"
#include "visitor.h"
#include "multimediaelement.h"
#include "jpg.h"
#include "mp3.h"
#include "mp4.h"
#include "showvisitor.h"
#include "spectrographvisitor.h"



int main(int argc, char* argv[])
{
    Client C;
    std::vector<const MultimediaElement *> elements = {new JPG("jpg", 6, 7), new MP3("mp3", 5.5), new MP4("mp4", 666, 66.7)};
    ShowVisitor *showVisitor = new ShowVisitor();
    C.displayMultimedia(elements, showVisitor);
    std::cout <<"Number of files visited " << showVisitor->getNbElementDisplayed() << std::endl;
    std::cout << "creating a different visitor" << std::endl;
    SpectrographVisitor *spectrograph = new SpectrographVisitor();
    C.displayMultimedia(elements, spectrograph);
    return 0;
}