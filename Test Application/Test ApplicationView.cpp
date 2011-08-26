// Test ApplicationView.cpp : implementation of the CTestApplicationView class
//

#include "stdafx.h"
#include "Test Application.h"

#include "Test ApplicationDoc.h"
#include "Test ApplicationView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTestApplicationView

IMPLEMENT_DYNCREATE(CTestApplicationView, CView)

BEGIN_MESSAGE_MAP(CTestApplicationView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CTestApplicationView construction/destruction

CTestApplicationView::CTestApplicationView()
{
	// TODO: add construction code here

}

CTestApplicationView::~CTestApplicationView()
{
}

BOOL CTestApplicationView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CTestApplicationView drawing

void CTestApplicationView::OnDraw(CDC* /*pDC*/)
{
	CTestApplicationDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CTestApplicationView printing

BOOL CTestApplicationView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTestApplicationView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTestApplicationView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CTestApplicationView diagnostics

#ifdef _DEBUG
void CTestApplicationView::AssertValid() const
{
	CView::AssertValid();
}

void CTestApplicationView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTestApplicationDoc* CTestApplicationView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTestApplicationDoc)));
	return (CTestApplicationDoc*)m_pDocument;
}
#endif //_DEBUG


// CTestApplicationView message handlers
