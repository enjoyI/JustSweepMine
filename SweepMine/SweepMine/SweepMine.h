
// SweepMine.h : SweepMine Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CSweepMineApp:
// �йش����ʵ�֣������ SweepMine.cpp
//

class CSweepMineApp : public CWinApp
{
public:
	CSweepMineApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSweepMineApp theApp;
