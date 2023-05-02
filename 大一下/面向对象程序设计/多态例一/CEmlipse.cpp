#include "CEmlipse.h"

CEmlipse::CEmlipse()
{
	setType(EMLIPSE);
	ar = 0;
	br = 0;
	text = nullptr;
	textSize = 0;
}

CEmlipse::CEmlipse(Point apt, int aar, int abr, int alineWidth, int acolor, char* atext, int size):
	pt(apt), ar(aar), br(abr), textSize(size), CGraph(EMLIPSE, acolor, alineWidth)
{
	text = new char[size];
	for (int i = 0; i < size; i++)
	{
		text[i] = atext[i];
	}
}

CEmlipse::CEmlipse(CEmlipse& cem)
{
	this->pt = cem.getPt();
	this->ar = cem.getAr();
	this->br = cem.getBr();
	setGraph(cem.getColor(), cem.getLineWidth());
	int size = cem.getTextSize();
	char* tmpText = cem.getText();
	text = new char[size];
	for (int i = 0; i < size; i++)
	{
		text[i] = tmpText[i];
	}
}

CEmlipse::~CEmlipse()
{
	if(text)
	delete[] this->text;
}

int CEmlipse::getTextSize() const
{
	return this->textSize;
}

int CEmlipse::getAr() const
{
	return this->ar;
}

int CEmlipse::getBr() const
{
	return this->br;
}

Point CEmlipse::getPt() const
{
	return this->pt;
}

char* CEmlipse::getText() const
{
	return this->text;
}

void CEmlipse::setEMlipse(Point apt, int aar, int abr, int alineWidth, int acolor, char* atext, int size)
{
	this->pt = apt;
	this->ar = aar;
	this->br = abr;
	setGraph(acolor, alineWidth);
	textSize = size;
	text = new char[size];
	for (int i = 0; i < size; i++)
	{
		text[i] = atext[i];
	}
}

void CEmlipse::Show()
{
	cout << "This Emlipse :\n"
		<< " Point: ( " << pt.getx() << "," << pt.gety() << " ) \n"
		<< " semi-major axis: " << this->getAr() << endl
		<< " semi-minor axis: " << this->getBr() << endl
		<< " line width: " << this->getLineWidth() << endl
		<< " text: " << this->getText() << endl;
	switch (this->getColor())
	{
	case RED:cout << " color is red " << endl; break;
	case GREEN:cout << " color is green " << endl; break;
	case BULE:cout << " color is blue" << endl; break;
	default:
		break;
	}
}
