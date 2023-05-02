#include "CPage.h"

CPage::CPage()
{

}

CPage::~CPage()
{

}

void CPage::AddGraph(CGraph* graph)
{
	if(graph!=nullptr)
		cgv.push_back(graph);
}

void CPage::Show()
{
	int numRect=0;
	int numEmlipse=0;
	int numRoundRect=0;
	for (int i = 0; i < cgv.size(); i++)
	{
		switch (cgv[i]->getType())
		{
		case RECT:numRect++; break;
		case EMLIPSE:numEmlipse++; break;
		case ROUND_RECT:numRoundRect++; break;
		default:
			break;
		}
	}
	cout << "This page : " << endl
		<< " The number of rectangle is " << numRect << endl
		<< " The number of ellipse  is " << numEmlipse << endl
		<< " The number of rounded rectangle is " << numRoundRect << endl;

}
