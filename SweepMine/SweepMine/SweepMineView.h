
// SweepMineView.h : CSweepMineView ��Ľӿ�
//

#pragma once


class CSweepMineView : public CView
{
protected: // �������л�����
	CSweepMineView();
	DECLARE_DYNCREATE(CSweepMineView)

// ����
public:
	CSweepMineDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CSweepMineView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // SweepMineView.cpp �еĵ��԰汾
inline CSweepMineDoc* CSweepMineView::GetDocument() const
   { return reinterpret_cast<CSweepMineDoc*>(m_pDocument); }
#endif

