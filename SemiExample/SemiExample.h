
// SemiExample.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CSemiExampleApp:
// �� Ŭ������ ������ ���ؼ��� SemiExample.cpp�� �����Ͻʽÿ�.
//

class CSemiExampleApp : public CWinAppEx
{
public:
	CSemiExampleApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CSemiExampleApp theApp;