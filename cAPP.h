#pragma once
#include "wx/wx.h"
#include "cMAIN.h"

class cAPP : public wxApp
{
private:
	cMAIN* m_frame1 = nullptr;
public:
	cAPP();
	~cAPP();

	virtual bool OnInit();
};