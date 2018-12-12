
// Papago-cpp.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CPapagocppApp:
// See Papago-cpp.cpp for the implementation of this class
//

class CPapagocppApp : public CWinApp
{
public:
	CPapagocppApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CPapagocppApp theApp;
