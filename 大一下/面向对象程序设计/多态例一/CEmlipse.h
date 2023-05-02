#pragma once
#include "graph.h"
class CEmlipse:
	virtual public CGraph
{
private:
	Point pt;
	int ar,br;
	char* text;
	int textSize;
public:
    CEmlipse();
    CEmlipse(Point apt, int aar, int abr, int alineWidth, int acolor, char* atext, int size);
    CEmlipse(CEmlipse& cem);
    ~CEmlipse();
    int getTextSize()const;
    int getAr()const;
    int getBr()const;
    Point getPt()const;
    char* getText()const;
    void setEMlipse(Point apt, int aar, int abr, int alineWidth, int acolor, char* atext, int size);
    void Show();
    friend class Cpage;
};
