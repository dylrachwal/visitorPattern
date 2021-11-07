#include <iostream>
#include "client.h"
#include "multimediaelement.h"
#include "showvisitor.h"

using namespace std;


Client::Client()
{
	cout << "client created " << endl;
}


void Client::displayMultimedia(const MultimediaElement *m, ShowVisitor *visitor)
{
	m->accept(visitor);
}
