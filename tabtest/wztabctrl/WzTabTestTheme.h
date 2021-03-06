#ifndef __WZTAB_TEST_THEME_H__
#define __WZTAB_GRAIDENT_THEME_H__

#include "WzTabTheme.h"

class CWzTabTestTheme : public CWzTabTheme
{
public:
	CWzTabTestTheme();
	virtual ~CWzTabTestTheme();
	
	CImageList *GetImageList() { return m_pImgList; };
	CImageList *SetImageList(CImageList *pImgList);
    void InitDefaultConfig();
    BOOL InitConfig(LPCTSTR themeFile);		
    BOOL SaveConfig(LPCTSTR themeFile);		
    void ReleaseConfig();
    void ResetNormalBorderPen();
    void ResetHoverBorderPen();
    void ResetSelectedBorderPen();
    void ResetLastSelectedBorderPen();
    void ResetTextfont();

    BOOL InitGdiObject();
    void ReleaseGdiObject();
	
	virtual COLORREF GetTabWndBkgndColor();
	virtual CFont *GetTextFont();
	virtual void DrawSubItem(CDC *pDC, int iconIdx, const CString& text, const CRect& rcSubItem, 
	                 TAB_ITEM_STATE baseState, TAB_SUB_ITEM_STATE subState);
	virtual void DrawBkgnd(CDC *pDC, const CRect& rcClient);
	virtual void DrawItemCloseBtn(CDC *pDC, const CRect& rcIcon, int lastHit, int lastState);
	virtual void DrawTabBorder(CDC *pDC, CRect& rcBorder, TAB_ITEM_STATE state);
	virtual void DrawTabBkgnd(CDC *pDC, const CRect& rcBkgnd, TAB_ITEM_STATE state);
	virtual void DrawTabText(CDC *pDC, const CRect& rcText, LPCTSTR lpszText, TAB_ITEM_STATE state);

public:
	CPen     m_BoderPenNormal;
	CPen     m_BoderPenHover;
	CPen     m_BoderPenSelected;
	CPen     m_BoderPenLastSelected;
    CString  m_fontName;
    int      m_fontSize;
    int      m_fontBold;
	CFont    m_TextFont;
	CImageList *m_pImgList;

	COLORREF m_crBorderNormal;
	COLORREF m_crBorderHover;
	COLORREF m_crBorderSelected;
	COLORREF m_crBorderLastSelected;

	COLORREF m_crTabTextNormal;
	COLORREF m_crTabTextHover;
	COLORREF m_crTabTextSelected;
	COLORREF m_crTabTextLastSelected;

	COLORREF m_crTabBkNormalT;
	COLORREF m_crTabBkNormalC;
	COLORREF m_crTabBkNormalB;
	COLORREF m_crTabBkHoverT;
	COLORREF m_crTabBkHoverC;
	COLORREF m_crTabBkHoverB;
	COLORREF m_crTabBkSelectedT;
	COLORREF m_crTabBkSelectedC;
	COLORREF m_crTabBkSelectedB;
	COLORREF m_crTabBkLastSelectedT;
	COLORREF m_crTabBkLastSelectedC;
	COLORREF m_crTabBkLastSelectedB;

	COLORREF m_crWndBkGnd;
};

#endif /*__WZTAB_GRAIDENT_THEME_H__*/

