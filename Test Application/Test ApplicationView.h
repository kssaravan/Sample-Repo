// Test ApplicationView.h : interface of the CTestApplicationView class
//


#pragma once


class CTestApplicationView : public CView
{
protected: // create from serialization only
	CTestApplicationView();
	DECLARE_DYNCREATE(CTestApplicationView)

// Attributes
public:
	CTestApplicationDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CTestApplicationView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Test ApplicationView.cpp
inline CTestApplicationDoc* CTestApplicationView::GetDocument() const
   { return reinterpret_cast<CTestApplicationDoc*>(m_pDocument); }
#endif

