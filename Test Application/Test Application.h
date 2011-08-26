// Test Application.h : main header file for the Test Application application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CTestApplicationApp:
// See Test Application.cpp for the implementation of this class
//

class CTestApplicationApp : public CWinApp
{
public:
	CTestApplicationApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTestApplicationApp theApp;