
// srf-civilacsionDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "srf-civilacsion.h"
#include "srf-civilacsionDlg.h"
#include "afxdialogex.h"
#include "math.h"
<<<<<<< HEAD
#include "afx.h"
=======
>>>>>>> origin/master

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CsrfcivilacsionDlg 对话框




CsrfcivilacsionDlg::CsrfcivilacsionDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CsrfcivilacsionDlg::IDD, pParent)
	, m_str1(_T(""))
	, m_str2(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CsrfcivilacsionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_str1);
	DDX_Text(pDX, IDC_EDIT2, m_str2);
}

BEGIN_MESSAGE_MAP(CsrfcivilacsionDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_1, &CsrfcivilacsionDlg::OnBnClicked1)
	ON_BN_CLICKED(IDC_2, &CsrfcivilacsionDlg::OnBnClicked2)
	ON_BN_CLICKED(IDC_3, &CsrfcivilacsionDlg::OnBnClicked3)
	ON_BN_CLICKED(IDC_4, &CsrfcivilacsionDlg::OnBnClicked4)
	ON_BN_CLICKED(IDC_dot, &CsrfcivilacsionDlg::OnBnClickeddot)
	ON_BN_CLICKED(IDC_ADD, &CsrfcivilacsionDlg::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_JIAN, &CsrfcivilacsionDlg::OnBnClickedJian)
	ON_BN_CLICKED(IDC_0, &CsrfcivilacsionDlg::OnBnClicked0)
	ON_BN_CLICKED(IDC_DY, &CsrfcivilacsionDlg::OnBnClickedDy)
	ON_BN_CLICKED(IDC_C, &CsrfcivilacsionDlg::OnBnClickedC)
	ON_BN_CLICKED(IDC_CHEN, &CsrfcivilacsionDlg::OnBnClickedChen)
	ON_BN_CLICKED(IDC_CHU, &CsrfcivilacsionDlg::OnBnClickedChu)
	ON_BN_CLICKED(IDC_5, &CsrfcivilacsionDlg::OnBnClicked5)
	ON_BN_CLICKED(IDC_6, &CsrfcivilacsionDlg::OnBnClicked6)
	ON_BN_CLICKED(IDC_7, &CsrfcivilacsionDlg::OnBnClicked7)
	ON_BN_CLICKED(IDC_8, &CsrfcivilacsionDlg::OnBnClicked8)
	ON_BN_CLICKED(IDC_9, &CsrfcivilacsionDlg::OnBnClicked9)
	ON_BN_CLICKED(IDC_delete, &CsrfcivilacsionDlg::OnBnClickeddelete)
	ON_BN_CLICKED(IDC_12, &CsrfcivilacsionDlg::OnBnClicked12)
	ON_BN_CLICKED(IDC_ZF, &CsrfcivilacsionDlg::OnBnClickedZf)
	ON_BN_CLICKED(IDC_FZY, &CsrfcivilacsionDlg::OnBnClickedFzy)
	ON_BN_CLICKED(IDC_GH, &CsrfcivilacsionDlg::OnBnClickedGh)
	ON_BN_CLICKED(IDC_BFH, &CsrfcivilacsionDlg::OnBnClickedBfh)
<<<<<<< HEAD
	ON_WM_TIMER()
=======
>>>>>>> origin/master
END_MESSAGE_MAP()


// CsrfcivilacsionDlg 消息处理程序

BOOL CsrfcivilacsionDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
<<<<<<< HEAD
	SetIcon(m_hIcon, FALSE);
	SetTimer(1,1000,NULL);
	SetTimer(2,1000,NULL);
	SetTimer(3,1000,NULL);// 设置小图标
=======
	SetIcon(m_hIcon, FALSE);		// 设置小图标
>>>>>>> origin/master

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CsrfcivilacsionDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CsrfcivilacsionDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CsrfcivilacsionDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CsrfcivilacsionDlg::OnBnClicked1()
{
	//UpdateData(true);
	m_str1=m_str1+L"1";
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void CsrfcivilacsionDlg::OnBnClicked2()
{
	//UpdateData(true);
	m_str1=m_str1+L"2";
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void CsrfcivilacsionDlg::OnBnClicked3()
{
	UpdateData(true);
	m_str1=m_str1+L"3";
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void CsrfcivilacsionDlg::OnBnClicked4()
{
	UpdateData(true);
	m_str1=m_str1+L"4";
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void CsrfcivilacsionDlg::OnBnClickeddot()
{
	UpdateData(true);
	m_str1=m_str1+L".";
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void CsrfcivilacsionDlg::OnBnClickedAdd()
{
	// TODO: 在此添加控件通知处理程序代码
	flag=1;
	UpdateData(true);
	temp=_ttof(m_str1);
	m_str1=" ";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedJian()
{
	// TODO: 在此添加控件通知处理程序代码
	flag=2;
	UpdateData(true);
	temp=_ttof(m_str1);
	m_str1=" ";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked0()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	m_str1=m_str1+L"0";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedDy()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	if(flag==1)
	{
		temp=temp+_ttof(m_str1);
		m_str2.Format(L"%lf",temp);
	}
	if(flag==2)
	{
		temp=temp-_ttof(m_str1);
		m_str2.Format(L"%lf",temp);
	}
	if(flag==3)
	{
		temp=temp*_ttof(m_str1);
		m_str2.Format(L"%lf",temp);
	}
	if(flag==4)
	{
		if(_ttof(m_str1)==0)
		{
			m_str2.Format(L"大兄弟，零不能作除数你不造吗？");
		}
		else
		{
			temp=temp/_ttof(m_str1);
			m_str2.Format(L"%lf",temp);
		}	
	}
	while(m_str2.Right(1)=="0")
		m_str2.Delete(m_str2.GetLength()-1,1);
	while(m_str2.Right(1)==".")
		m_str2.Delete(m_str2.GetLength()-1,1);
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedC()
{
	// TODO: 在此添加控件通知处理程序代码
	m_str1=" ";
	m_str2=" ";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedChen()
{
	// TODO: 在此添加控件通知处理程序代码
	flag=3;
	UpdateData(true);
	temp=_ttof(m_str1);
	m_str1=" ";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickedChu()
{
	// TODO: 在此添加控件通知处理程序代码
	flag=4;
	UpdateData(true);
	temp=_ttof(m_str1);
    m_str1=" ";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	m_str1=m_str1+L"5";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	m_str1=m_str1+L"6";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked7()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	m_str1=m_str1+L"7";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked8()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	m_str1=m_str1+L"8";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked9()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	m_str1=m_str1+L"9";
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClickeddelete()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	m_str1.Delete(m_str1.GetLength()-1,1);
	UpdateData(false);
}


void CsrfcivilacsionDlg::OnBnClicked12()
{
	m_str2=" ";
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void CsrfcivilacsionDlg::OnBnClickedZf()
{
	UpdateData(true);
	temp=_ttof(m_str1);
	temp=-temp;
	m_str1.Format(L"%lf",temp);
	while(m_str1.Right(1)=="0")
		m_str1.Delete(m_str1.GetLength()-1,1);
	while(m_str1.Right(1)==".")
		m_str1.Delete(m_str1.GetLength()-1,1);
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void CsrfcivilacsionDlg::OnBnClickedFzy()
{
	UpdateData(true);
	temp=_ttof(m_str1);
	if(temp==0)
	{
	   m_str1.Format(L"大兄弟，别逗！");
	}
	else
	{
       temp=1/temp;
	   m_str1.Format(L"%lf",temp);
	}
	
	while(m_str1.Right(1)=="0")
		m_str1.Delete(m_str1.GetLength()-1,1);
	while(m_str1.Right(1)==".")
		m_str1.Delete(m_str1.GetLength()-1,1);
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void CsrfcivilacsionDlg::OnBnClickedGh()
{
	UpdateData(true);
	temp=_ttof(m_str1);
	temp=sqrt(temp);
	m_str1.Format(L"%lf",temp);
	while(m_str1.Right(1)=="0")
		m_str1.Delete(m_str1.GetLength()-1,1);
	while(m_str1.Right(1)==".")
		m_str1.Delete(m_str1.GetLength()-1,1);
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void CsrfcivilacsionDlg::OnBnClickedBfh()
{
	UpdateData(true);
	temp=_ttof(m_str1);
	temp=temp/100;
	m_str1.Format(L"%lf",temp);
	while(m_str1.Right(1)=="0")
		m_str1.Delete(m_str1.GetLength()-1,1);
	while(m_str1.Right(1)==".")
		m_str1.Delete(m_str1.GetLength()-1,1);
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}
<<<<<<< HEAD

void CsrfcivilacsionDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	int x,x1,y,y1,ox=450,oy=450;
	int x2,y2,x3,y3;
	int x4,y4,x5,y5;
	int hh,mm,ss;
	CTime t = CTime::GetCurrentTime();
	hh = t.GetHour(); mm = t.GetMinute(); ss = t.GetSecond();
	TRACE("%d %d %d  ",hh,mm,ss);

	
	 
if(nIDEvent==1)
  {
	int r=80;
	double Rad;
	double Rad1;
	Rad=3.1415926*ss/30;
    Rad1=3.1415926*(ss-1)/30;
	x=ox+r*sin(Rad);
	y=ox+r*(-cos(Rad));
    x1=ox+r*sin(Rad1);
	y1=ox+r*(-cos(Rad1));
	CDC *pDC;
	CPen newpen;
	newpen.CreatePen(PS_SOLID,1,RGB(0,0,0));
	pDC=GetDC();
	CPen*oldpen=pDC->SelectObject(&newpen);
    CDC *pDC1;
	CPen newpen1;
	newpen1.CreatePen(PS_SOLID,2,RGB(240,240,240));
	pDC1=GetDC();
	CPen*oldpen1=pDC1->SelectObject(&newpen1);
	pDC->MoveTo(ox,oy);
	pDC->LineTo(x,y);
	pDC->SelectObject(oldpen);
	pDC1->MoveTo(ox,oy);
	pDC1->LineTo(x1,y1);
	pDC1->SelectObject(oldpen1);	
  }
    
if(nIDEvent==2)
  {
	int r=70;
	double Rad2;
	double Rad3;
	Rad2=3.1415926*mm/30;
    Rad3=3.1415926*(mm-1)/30;
	x2=ox+r*sin(Rad2);
	y2=ox+r*(-cos(Rad2));
    x3=ox+r*sin(Rad3);
	y3=ox+r*(-cos(Rad3));
	CDC *pDC2;
	CPen newpen2;
	newpen2.CreatePen(PS_SOLID,3,RGB(240,0,0));
	pDC2=GetDC();
	CPen*oldpen2=pDC2->SelectObject(&newpen2);
    CDC *pDC3;
	CPen newpen3;
	newpen3.CreatePen(PS_SOLID,3,RGB(240,240,240));
	pDC3=GetDC();
	CPen*oldpen3=pDC3->SelectObject(&newpen3);
	pDC2->MoveTo(ox,oy);
	pDC2->LineTo(x2,y2);
	pDC2->SelectObject(oldpen2);
	pDC3->MoveTo(ox,oy);
	pDC3->LineTo(x3,y3);
	pDC3->SelectObject(oldpen3);	
  }
if(nIDEvent==3)
  {
	int r=50;
	double Rad4;
	double Rad5;
	if(hh>12)
	{
		hh-=12;
	}
	Rad4=3.1415926*hh/6;
    Rad5=3.1415926*(hh-1)/6;
	x4=ox+r*sin(Rad4);
	y4=ox+r*(-cos(Rad4));
    x5=ox+r*sin(Rad5);
	y5=ox+r*(-cos(Rad5));
	CDC *pDC4;
	CPen newpen4;
	newpen4.CreatePen(PS_SOLID,5,RGB(0,240,0));
	pDC4=GetDC();
	CPen*oldpen4=pDC4->SelectObject(&newpen4);
    CDC *pDC5;
	CPen newpen5;
	newpen5.CreatePen(PS_SOLID,5,RGB(240,240,240));
	pDC5=GetDC();
	CPen*oldpen5=pDC5->SelectObject(&newpen5);
	pDC4->MoveTo(ox,oy);
	pDC4->LineTo(x4,y4);
	pDC4->SelectObject(oldpen4);
	pDC5->MoveTo(ox,oy);
	pDC5->LineTo(x5,y5);
	pDC5->SelectObject(oldpen5);	
  } 
     CDC *pDC6;
	 pDC6=GetDC();
     CPen pen(PS_SOLID,6,RGB(0,0,255));
     CPen* pOldPen=pDC6->SelectObject(&pen);
     pDC6->SelectStockObject(NULL_BRUSH);
     pDC6->Ellipse(ox - 100, oy - 100 , ox +100, oy +100);
	 for(int i=0;i<12;i++)
	{
		double l=96,ag=i*3.14159/6;
		double a=l*sin(ag)+2+ox,b=-l*cos(ag)+2+oy,c=l*sin(ag)-2+ox,d=-l*cos(ag)-2+oy;
		pDC6->Ellipse(a,b,c,d);
	}
	 pDC6->TextOutW(440,360,L"12");
	 pDC6->TextOutW(530,440,L"3");
	 pDC6->TextOutW(450,530,L"6");
 	 pDC6->TextOutW(360,440,L"9");
     pDC6->SelectObject(pOldPen);
	
	// MessageBox(NULL,str,NULL);

}


=======
>>>>>>> origin/master
