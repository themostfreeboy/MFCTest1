
// MFC_test_1Dlg.h : ͷ�ļ�
//

#pragma once


// CMFC_test_1Dlg �Ի���
class CMFC_test_1Dlg : public CDialogEx
{
// ����
public:
	CMFC_test_1Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MFC_TEST_1_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	// �༭���ڵ�����
	CString edit_text;
	afx_msg void OnBnClickedButton1();
	// �洢��̬��static1�е�ֵ
	CString static_text;
};
