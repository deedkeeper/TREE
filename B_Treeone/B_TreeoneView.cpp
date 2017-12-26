
// B_TreeoneView.cpp : CB_TreeoneView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CB_TreeoneView 构造/析构

CB_TreeoneView::CB_TreeoneView()
{
	// TODO: 在此处添加构造代码

}

CB_TreeoneView::~CB_TreeoneView()
{
}

BOOL CB_TreeoneView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CB_TreeoneView 绘制

void CB_TreeoneView::OnDraw(CDC* /*pDC*/)
{
	CB_TreeoneDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CB_TreeoneView 诊断

#ifdef _DEBUG
void CB_TreeoneView::AssertValid() const
{
	CView::AssertValid();
}

void CB_TreeoneView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CB_TreeoneDoc* CB_TreeoneView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CB_TreeoneDoc)));
	return (CB_TreeoneDoc*)m_pDocument;
}
#endif //_DEBUG


// CB_TreeoneView 消息处理程序
