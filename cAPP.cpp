#include "cAPP.h"
wxIMPLEMENT_APP(cAPP);

cAPP::cAPP()
{}

cAPP::~cAPP()
{}

bool cAPP::OnInit()
{
	m_frame1 = new cMAIN();
	m_frame1->Show();
	return true;
}