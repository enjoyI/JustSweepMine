
// SweepMineView.cpp : CSweepMineView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "SweepMine.h"
#endif

#include "SweepMineDoc.h"
#include "SweepMineView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSweepMineView

IMPLEMENT_DYNCREATE(CSweepMineView, CView)

BEGIN_MESSAGE_MAP(CSweepMineView, CView)
END_MESSAGE_MAP()

// CSweepMineView 构造/析构

CSweepMineView::CSweepMineView()
{
	// TODO: 在此处添加构造代码

}

CSweepMineView::~CSweepMineView()
{
}

BOOL CSweepMineView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CSweepMineView 绘制

void CSweepMineView::OnDraw(CDC* /*pDC*/)
{
	CSweepMineDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CSweepMineView 诊断

#ifdef _DEBUG
void CSweepMineView::AssertValid() const
{
	CView::AssertValid();
}

void CSweepMineView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSweepMineDoc* CSweepMineView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSweepMineDoc)));
	return (CSweepMineDoc*)m_pDocument;
}
#endif //_DEBUG


// CSweepMineView 消息处理程序
