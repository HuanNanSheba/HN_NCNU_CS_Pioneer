#include "CRect.h"

CRect::CRect():CGraph()
{
	setType(RECT);
	width = 0;
	height = 0;
	text = nullptr;
	textSize = 0;
}

CRect::CRect(Point apt, int awidth, int aheight, int alineWidth, int acolor,char* atext, int size):
	pt(apt),width(awidth),height(aheight), textSize(size),CGraph(RECT,acolor, alineWidth)
{
	text = new char[size];
	for (int i = 0; i < size; i++)
	{
		text[i] = atext[i];
	}
}

CRect::CRect(CRect& rect)
{
	this->pt = rect.getPt();
	this->width = rect.getWidth();
	this->height = rect.getHeight();
	setGraph(rect.getColor(), rect.getLineWidth());
	int size = rect.getTextSize();
	char* tmpText = rect.getText();
	text = new char[size];
	for (int i = 0; i < size; i++)
	{
		text[i] = tmpText[i];
	}
}

CRect::~CRect()
{
	if(text)
	delete[] this->text;
}

int CRect::getTextSize() const
{
	return this->textSize;
}

int CRect::getWidth() const
{
	return this->width;
}

int CRect::getHeight() const
{
	return this->height;
}

Point CRect::getPt() const
{
	return this->pt;
}

char* CRect::getText() const
{
	return this->text;
}

void CRect::setRect(Point apt, int awidth, int aheight, int alineWidth, int acolor, char* atext, int size)
{
	this->pt = apt;
	this->width = awidth;
	this->height = aheight;
	setGraph(acolor,alineWidth);
	textSize = size;
	text = new char[size];
	for (int i = 0; i < size; i++)
	{
		text[i] = atext[i];
	}
}

void CRect::Show()
{
	cout << "This Rect :\n"
		<< " Point: ( " << pt.getx() << "," << pt.gety() << " ) \n"
		<< " width: " << this->getWidth() << endl
		<< " height:" << this->getHeight() << endl
		<< " line width:" << this->getLineWidth() << endl
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
