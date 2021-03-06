
// Papago-cppDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Papago-cpp.h"
#include "Papago-cppDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPapagocppDlg dialog



CPapagocppDlg::CPapagocppDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PAPAGOCPP_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CPapagocppDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_TRANSLATION, m_btnTranslation);
	DDX_Control(pDX, IDC_COMBO_FROM, m_cboFrom);
	DDX_Control(pDX, IDC_COMBO_TO, m_cboTo);
	DDX_Control(pDX, IDC_EDIT_FROM, m_txtFrom);
	DDX_Control(pDX, IDC_EDIT_TO, m_txtTo);
	DDX_Control(pDX, IDC_STATIC_CURR_LANG, m_lbCurrLang);
}

BEGIN_MESSAGE_MAP(CPapagocppDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_TRANSLATION, &CPapagocppDlg::OnBnClickedButtonTranslation)
END_MESSAGE_MAP()


// CPapagocppDlg message handlers

BOOL CPapagocppDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CPapagocppDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CPapagocppDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CPapagocppDlg::OnBnClickedButtonTranslation()
{
	// TODO: Add your control notification handler code here
}
