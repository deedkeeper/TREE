
// B_TreeoneView.h : CB_TreeoneView ��Ľӿ�
//

#pragma once


class CB_TreeoneView : public CView
{
protected: // �������л�����
	CB_TreeoneView();
	DECLARE_DYNCREATE(CB_TreeoneView)

// ����
public:
	CB_TreeoneDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CB_TreeoneView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // B_TreeoneView.cpp �еĵ��԰汾
inline CB_TreeoneDoc* CB_TreeoneView::GetDocument() const
   { return reinterpret_cast<CB_TreeoneDoc*>(m_pDocument); }
#endif

