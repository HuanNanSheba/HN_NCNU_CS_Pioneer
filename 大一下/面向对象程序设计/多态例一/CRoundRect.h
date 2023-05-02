#pragma once
#include "CRect.h"
#include "CEmlipse.h"
class CRoundRect :
    public CRect,public CEmlipse
{
public:
    CRoundRect();
    CRoundRect(Point apt, int awidth, int aheight, int aar, int abr, 
        int alineWidth, int acolor, char* atext, int size);
    ~CRoundRect();
    void Show();
    friend class Cpage;
};

