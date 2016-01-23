
// SweepMineView.h : CSweepMineView 类的接口
//

#pragma once


class CSweepMineView : public CView
{
protected: // 仅从序列化创建
	CSweepMineView();
	DECLARE_DYNCREATE(CSweepMineView)

// 特性
public:
	CSweepMineDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CSweepMineView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // SweepMineView.cpp 中的调试版本
inline CSweepMineDoc* CSweepMineView::GetDocument() const
   { return reinterpret_cast<CSweepMineDoc*>(m_pDocument); }
#endif

