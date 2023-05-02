#pragma once

#include <iostream>
using namespace std;

#define RECT 1
#define EMLIPSE 2
#define ROUND_RECT 3
#define RED 1
#define GREEN 2
#define BULE 3

class Point
{
private:
	int x, y;
public:
	Point(int ax,int ay):x(ax),y(ay)
	{ }
	Point()
	{
		x = 0;
		y = 0;
	}
	void setPoint(int ax,int ay)
	{
		this->x = ax;
		this->y = ay;
	}
	Point getPoint()const
	{
		return *this;
	}
	int getx() { return this->x; }
	int gety() { return this->y; }
	~Point()
	{ }
};

class CGraph
{
private:
	int type;
	int color;
	int lineWidth;
public:
	CGraph(int atype,int acolor,int alineWidth):type(atype),color(acolor),lineWidth(alineWidth)
	{ }
	CGraph()
	{
		type = 0;
		color = 0;
		lineWidth = 0;
	}
	~CGraph()
	{ }
	int getType()const;
	int getColor()const;
	int getLineWidth()const;
	void setGraph(int atype, int acolor, int alineWidth);
	void setGraph(int acolor, int alineWidth);
	void setType(int atype);
	void setColor(int acolor);
	void setLineWidth(int alinewidth);
	virtual void Show() = 0;
};
