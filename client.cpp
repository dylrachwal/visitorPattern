#include <iostream>
#include "multimediaelement.h"
#include "client.h"
#include "visitor.h"

using namespace std;


Client::Client()
{
	cout << "client created " << endl;
}

void Client::createShow()
{
	this->visitor = new ShowVisitor();
}
void Client::displayMultimedia(const MultimediaElement m)
{
	m.accept(this->visitor);
}
void Client::displaySpectre(const MultimediaElement m)
{
	m.accept(this->visitor);
}
