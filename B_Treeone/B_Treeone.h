
// B_Treeone.h : B_Treeone Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CB_TreeoneApp:
// �йش����ʵ�֣������ B_Treeone.cpp
//

class CB_TreeoneApp : public CWinApp
{
public:
	CB_TreeoneApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CB_TreeoneApp theApp;
