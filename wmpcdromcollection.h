#if !defined(AFX_WMPCDROMCOLLECTION_H__31A13E23_F636_4FC8_85BB_0F9C1CDD9672__INCLUDED_)
#define AFX_WMPCDROMCOLLECTION_H__31A13E23_F636_4FC8_85BB_0F9C1CDD9672__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


// このインターフェイスによって参照されるディスパッチ インターフェイス。
class CWMPCdrom;

/////////////////////////////////////////////////////////////////////////////
// CWMPCdromCollection ラップ クラス

class CWMPCdromCollection : public COleDispatchDriver
{
public:
	CWMPCdromCollection() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPCdromCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPCdromCollection(const CWMPCdromCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	long GetCount();
	CWMPCdrom Item(long lIndex);
	CWMPCdrom getByDriveSpecifier(LPCTSTR bstrDriveSpecifier);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPCDROMCOLLECTION_H__31A13E23_F636_4FC8_85BB_0F9C1CDD9672__INCLUDED_)
