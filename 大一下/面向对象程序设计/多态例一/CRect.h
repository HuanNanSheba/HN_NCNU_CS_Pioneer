#pragma once
#include "graph.h"

class CRect :
   virtual public CGraph
{
private:    
    Point pt;
    int width;
    int height;
    char* text;
    int textSize;
public:
    CRect();
    CRect(Point apt, int awidth, int aheight, int alineWidth, int acolor, char* atext, int size);
    CRect(CRect& rect);
    ~CRect();
    int getTextSize()const;
    int getWidth()const;
    int getHeight()const;
    Point getPt()const;
    char* getText()const;
    void setRect(Point apt, int awidth, int aheight, int alineWidth, int acolor,char* atext, int size);
    void Show();
    friend class Cpage;
};

