
// MFC_test_1Dlg.h : 头文件
//

#pragma once


// CMFC_test_1Dlg 对话框
class CMFC_test_1Dlg : public CDialogEx
{
// 构造
public:
	CMFC_test_1Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MFC_TEST_1_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	// 编辑框内的内容
	CString edit_text;
	afx_msg void OnBnClickedButton1();
	// 存储静态框static1中的值
	CString static_text;
};
