
// SweepMineView.cpp : CSweepMineView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CSweepMineView ����/����

CSweepMineView::CSweepMineView()
{
	// TODO: �ڴ˴���ӹ������

}

CSweepMineView::~CSweepMineView()
{
}

BOOL CSweepMineView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CSweepMineView ����

void CSweepMineView::OnDraw(CDC* /*pDC*/)
{
	CSweepMineDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CSweepMineView ���

#ifdef _DEBUG
void CSweepMineView::AssertValid() const
{
	CView::AssertValid();
}

void CSweepMineView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSweepMineDoc* CSweepMineView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSweepMineDoc)));
	return (CSweepMineDoc*)m_pDocument;
}
#endif //_DEBUG


// CSweepMineView ��Ϣ�������
