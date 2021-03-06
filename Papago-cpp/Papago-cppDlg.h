
// Papago-cppDlg.h : header file
//

#pragma once


// CPapagocppDlg dialog
class CPapagocppDlg : public CDialogEx
{
// Construction
public:
	CPapagocppDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAPAGOCPP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CButton m_btnTranslation;
	afx_msg void OnBnClickedButtonTranslation();
	CComboBox m_cboFrom;
	CComboBox m_cboTo;
	CEdit m_txtFrom;
	CEdit m_txtTo;
	CStatic m_lbCurrLang;
};
