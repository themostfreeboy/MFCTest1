
// MFC_test_1Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC_test_1.h"
#include "MFC_test_1Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_test_1Dlg �Ի���




CMFC_test_1Dlg::CMFC_test_1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMFC_test_1Dlg::IDD, pParent)
	, edit_text(_T(""))
	, static_text(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFC_test_1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, edit_text);
	DDV_MaxChars(pDX, edit_text, 100);
	DDX_Text(pDX, IDC_STATIC1, static_text);
	DDV_MaxChars(pDX, static_text, 100);
}

BEGIN_MESSAGE_MAP(CMFC_test_1Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT2, &CMFC_test_1Dlg::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFC_test_1Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CMFC_test_1Dlg ��Ϣ�������

BOOL CMFC_test_1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMFC_test_1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMFC_test_1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFC_test_1Dlg::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	//AfxMessageBox(edit_text,MB_OK,NULL);
	//GetDlgItemText(IDC_EDIT2,edit_text);
	UpdateData(TRUE); 
}


void CMFC_test_1Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	static_text=edit_text;
	UpdateData(FALSE);
	SetDlgItemText(IDC_BUTTON1,_T("clicked button")); 
	AfxMessageBox(MyCStringToLPCTSTR(static_text),MB_OK,NULL);
}
