#include "CRect.h"
#include "CEmlipse.h"
#include "CRoundRect.h"
#include "CPage.h"
int main()
{
	Point pos1(10, 20),pos2(30,40),pos(50,60);
	char messge[8] = "welcome";
	CRect* rect1 = new CRect(pos1, 3, 4, 1, RED, messge, 8);
	CRect* rect2 = new CRect(pos2, 3, 4, 1, BULE, messge, 8);
	CEmlipse* cem1 = new CEmlipse(pos1, 3, 4, 1, RED, messge, 8);
	CEmlipse* cem2 = new CEmlipse(pos2, 3, 4, 1, BULE, messge, 8);
	CEmlipse* cem3 = new CEmlipse(pos, 3, 4, 1, GREEN, messge, 8);
	CRoundRect* crr = new CRoundRect(pos, 3, 4, 6, 8, 1, GREEN, messge, 8);
	CPage page;
	page.AddGraph(rect1);
	page.AddGraph(rect2);
	page.AddGraph(cem1);
	page.AddGraph(cem2);
	page.AddGraph(cem3);
	page.AddGraph(crr);
	rect1->Show();
	cem2->Show();
	crr->Show();
	page.Show();
	return 0;
}