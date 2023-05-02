#include "graph.h"

int CGraph::getType() const
{
	return this->type;
}

int CGraph::getColor() const
{
	return this->color;
}

int CGraph::getLineWidth() const
{
	return this->lineWidth;
}

void CGraph::setGraph(int atype, int acolor, int alineWidth)
{
	this->type = atype;
	this->color = acolor;
	this->lineWidth = alineWidth;
}

void CGraph::setGraph(int acolor, int alineWidth)
{
	this->color = acolor;
	this->lineWidth = alineWidth;
}

void CGraph::setType(int atype)
{
	this->type = atype;
}

void CGraph::setColor(int acolor)
{
	this->color = acolor;
}

void CGraph::setLineWidth(int alinewidth)
{
	this->lineWidth = alinewidth;
}
