#include "CRoundRect.h"

CRoundRect::CRoundRect():CRect(), CEmlipse()
{
	this->setType(ROUND_RECT);
}

CRoundRect::CRoundRect(Point apt, int awidth, int aheight, int aar, int abr, 
	int alineWidth, int acolor, char* atext, int size)
{
	this->setRect(apt, awidth, aheight, alineWidth,acolor, atext, size);
	this->setEMlipse(apt, aar, abr, alineWidth, acolor, atext, size);
	this->setType(ROUND_RECT);
}

CRoundRect::~CRoundRect() 
{
	CRect::~CRect();
	CEmlipse::~CEmlipse();
}

void CRoundRect::Show()
{
	cout << "This Rounded Rectangle :\n"
		<< " Point: ( " << this->CRect::getPt().getx() << "," << this->CRect::getPt().gety() << " ) \n"
		<< " width: " << this->getWidth() << endl
		<< " height: " << this->getHeight() << endl
		<< " semi-major axis: " << this->getAr() << endl
		<< " semi-minor axis: " << this->getBr() << endl
		<< " line width: " << this->CRect::getLineWidth() << endl
		<< " text: " << this->CRect::getText() << endl;
	switch (this->CRect::getColor())
	{
	case RED:cout << " color is red " << endl; break;
	case GREEN:cout << " color is green " << endl; break;
	case BULE:cout << " color is blue" << endl; break;
	default:
		break;
	}
}
