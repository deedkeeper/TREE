
// B_TreeoneView.cpp : CB_TreeoneView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "B_Treeone.h"
#endif

#include "B_TreeoneDoc.h"
#include "B_TreeoneView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CB_TreeoneView

IMPLEMENT_DYNCREATE(CB_TreeoneView, CView)

BEGIN_MESSAGE_MAP(CB_TreeoneView, CView)
END_MESSAGE_MAP()

// CB_TreeoneView ����/����

CB_TreeoneView::CB_TreeoneView()
{
	// TODO: �ڴ˴���ӹ������

}

CB_TreeoneView::~CB_TreeoneView()
{
}

BOOL CB_TreeoneView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CB_TreeoneView ����

void CB_TreeoneView::OnDraw(CDC* /*pDC*/)
{
	CB_TreeoneDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CB_TreeoneView ���

#ifdef _DEBUG
void CB_TreeoneView::AssertValid() const
{
	CView::AssertValid();
}

void CB_TreeoneView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CB_TreeoneDoc* CB_TreeoneView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CB_TreeoneDoc)));
	return (CB_TreeoneDoc*)m_pDocument;
}
#endif //_DEBUG


// CB_TreeoneView ��Ϣ�������
