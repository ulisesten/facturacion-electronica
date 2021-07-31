// CkPkcs11.h: interface for the CkPkcs11 class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.86

#ifndef _CkPkcs11_H
#define _CkPkcs11_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkPkcs11
class CK_VISIBLE_PUBLIC CkPkcs11  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkPkcs11(const CkPkcs11 &);
	CkPkcs11 &operator=(const CkPkcs11 &);

    public:
	CkPkcs11(void);
	virtual ~CkPkcs11(void);

	static CkPkcs11 *createNew(void);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	CkBaseProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------


	// ----------------------
	// Methods
	// ----------------------
	// Test
	bool Test123(void);

	// Test
	CkTask *Test123Async(void);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
