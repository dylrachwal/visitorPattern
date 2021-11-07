#include <iostream>
#include "client.h"
#include "multimediaelement.h"
#include "visitor.h"
#include "showvisitor.h"

using namespace std;


Client::Client()
{
	cout << "client created " << endl;
}

void Client::createShow()
{
	ShowVisitor* showVisitor = new ShowVisitor();
	this->visitor = showVisitor;
}
void Client::displayMultimedia(const MultimediaElement m)
{
	m.accept(this->visitor);
}
void Client::displaySpectre(const MultimediaElement m)
{
	m.accept(this->visitor);
}
