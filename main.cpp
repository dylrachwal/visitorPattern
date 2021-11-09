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
    /* Creation of the Client*/
    Client C;
    /* Creation of the array of different child of Multimedia element that we want to process */
    std::vector<const MultimediaElement *> elements = {new JPG("jpg", 6, 7), new MP3("mp3", 5.5), new MP4("mp4", 666, 66.7)};
    /* Creation of the Visitor*/
    ShowVisitor *showVisitor = new ShowVisitor();
    /* Displaying every Element of the array with the show visitor. Utilization of polymorphism here to adapt the visitor to a showvisitor. Same for the elements*/
    C.displayMultimedia(elements, showVisitor);
    std::cout <<"Number of files visited " << showVisitor->getNbElementDisplayed() << std::endl;
    std::cout << "creating a different visitor" << std::endl;
    /* Creation of another visitor*/
    SpectrographVisitor *spectrograph = new SpectrographVisitor();
    /* Show of the adapation of the visitor of another one during the execution and not the compilation time*/
    C.displayMultimedia(elements, spectrograph);
    return 0;
}