// CkPkcs11W.h: interface for the CkPkcs11W class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.86

#ifndef _CkPkcs11W_H
#define _CkPkcs11W_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkTaskW;
class CkBaseProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkPkcs11W
class CK_VISIBLE_PUBLIC CkPkcs11W  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkPkcs11W(const CkPkcs11W &);
	CkPkcs11W &operator=(const CkPkcs11W &);

    public:
	CkPkcs11W(void);
	virtual ~CkPkcs11W(void);

	

	static CkPkcs11W *createNew(void);
	

	CkPkcs11W(bool bCallbackOwned);
	static CkPkcs11W *createNew(bool bCallbackOwned);

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkBaseProgressW *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgressW *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------


	// ----------------------
	// Methods
	// ----------------------
	// Test
	bool Test123(void);

	// Creates an asynchronous task to call the Test123 method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *Test123Async(void);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
