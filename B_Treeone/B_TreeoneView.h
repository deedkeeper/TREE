
// B_TreeoneView.h : CB_TreeoneView 类的接口
//

#pragma once


class CB_TreeoneView : public CView
{
protected: // 仅从序列化创建
	CB_TreeoneView();
	DECLARE_DYNCREATE(CB_TreeoneView)

// 特性
public:
	CB_TreeoneDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CB_TreeoneView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // B_TreeoneView.cpp 中的调试版本
inline CB_TreeoneDoc* CB_TreeoneView::GetDocument() const
   { return reinterpret_cast<CB_TreeoneDoc*>(m_pDocument); }
#endif

