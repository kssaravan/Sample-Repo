// Test ApplicationDoc.cpp : implementation of the CTestApplicationDoc class
//

#include "stdafx.h"
#include "Test Application.h"

#include "Test ApplicationDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTestApplicationDoc

IMPLEMENT_DYNCREATE(CTestApplicationDoc, CDocument)

BEGIN_MESSAGE_MAP(CTestApplicationDoc, CDocument)
END_MESSAGE_MAP()


// CTestApplicationDoc construction/destruction

CTestApplicationDoc::CTestApplicationDoc()
{
	// TODO: add one-time construction code here

}

CTestApplicationDoc::~CTestApplicationDoc()
{
}

BOOL CTestApplicationDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CTestApplicationDoc serialization

void CTestApplicationDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}


// CTestApplicationDoc diagnostics

#ifdef _DEBUG
void CTestApplicationDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTestApplicationDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CTestApplicationDoc commands
