#pragma once
#include "CRoundRect.h"
#include <vector>
class CPage
{
private:
	vector<CGraph*> cgv;
public:	
	CPage();
	~CPage();
	void AddGraph(CGraph* graph);
	void Show();
};

