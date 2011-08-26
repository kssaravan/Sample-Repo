// Test ApplicationDoc.h : interface of the CTestApplicationDoc class
//


#pragma once


class CTestApplicationDoc : public CDocument
{
protected: // create from serialization only
	CTestApplicationDoc();
	DECLARE_DYNCREATE(CTestApplicationDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CTestApplicationDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


