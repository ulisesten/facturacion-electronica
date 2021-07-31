// CkPdf.h: interface for the CkPdf class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.86

#ifndef _CkPdf_H
#define _CkPdf_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkCert;
class CkJsonObject;
class CkBinData;
class CkHttp;
class CkPrivateKey;
class CkTask;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkPdf
class CK_VISIBLE_PUBLIC CkPdf  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkPdf(const CkPdf &);
	CkPdf &operator=(const CkPdf &);

    public:
	CkPdf(void);
	virtual ~CkPdf(void);

	static CkPdf *createNew(void);
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
	// The number of pages in the currently open PDF.
	int get_NumPages(void);

	// The number of digital signatures present in the currently open PDF.
	int get_NumSignatures(void);

	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string. Can be set to a list of the following comma
	// separated keywords:
	//     "WriteStandardXref" - When writing the PDF, write the cross reference
	//     section in standard format if possible. (The "standard format" is the older
	//     non-compressed format.)
	void get_UncommonOptions(CkString &str);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string. Can be set to a list of the following comma
	// separated keywords:
	//     "WriteStandardXref" - When writing the PDF, write the cross reference
	//     section in standard format if possible. (The "standard format" is the older
	//     non-compressed format.)
	const char *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string. Can be set to a list of the following comma
	// separated keywords:
	//     "WriteStandardXref" - When writing the PDF, write the cross reference
	//     section in standard format if possible. (The "standard format" is the older
	//     non-compressed format.)
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds a certificate to be used for PDF signing. To sign with more than one
	// certificate, call AddSigningCert once per certificate.
	// 
	// Note: This method is used to provide the ability to sign once with multiple
	// certificates. This is different than signing with one certificate, and then
	// signing again with a different certificate.
	// 
	bool AddSigningCert(CkCert &cert);


	// Gets the contents of the PDF's Document Security Store (/DSS) if it exists.
	// Returns the information in JSON format (in json). If there is no /DSS then an
	// empty JSON document "{}" is returned in json.
	bool GetDss(CkJsonObject &json);


	// This method can be used to get the signer certificate after calling
	// VerifySignature. The index should be the same value as the index passed to
	// VerifySignature. If successful, and if the signer certificate is fully available
	// within the signature, the cert is loaded with the signer certificate.
	bool GetSignerCert(int index, CkCert &cert);


	// Loads the PDF file contained in pdfData.
	bool LoadBd(CkBinData &pdfData);


	// Load a PDF file into this object in memory.
	bool LoadFile(const char *filePath);


	// Sets the HTTP object to be used to communicate with the timestamp authority
	// (TSA) server for cases where long term validation (LTV) of signatures is
	// desired. The http is used to send the requests, and it allows for connection
	// related settings and timeouts to be set. For example, if HTTP or SOCKS proxies
	// are required, these features can be specified on the http.
	// 
	// The http is also used to send OCSP requests to store OCSP responses in the PDF's
	// document security store (DSS).
	// 
	void SetHttpObj(CkHttp &http);


	// Provides an optional JPG image to be included in the signature appearance. The
	// JPG data is passed in jpgData.
	bool SetSignatureJpeg(CkBinData &jpgData);


	// Specifies a certificate to be used when signing the PDF. Signing requires both a
	// certificate and private key. In this case, the private key is implicitly
	// specified if the certificate originated from a PFX that contains the
	// corresponding private key, or if on a Windows-based computer where the
	// certificate and corresponding private key are pre-installed.
	bool SetSigningCert(CkCert &cert);


	// Specifies a digital certificate and private key to be used for signing the PDF.
	bool SetSigningCert2(CkCert &cert, CkPrivateKey &privateKey);


	// Signs the open PDF and if successful writes the signed PDF to the ARG3. The jsonOptions
	// contains information and instructions about the signature.
	bool SignPdf(CkJsonObject &jsonOptions, const char *outFilePath);

	// Signs the open PDF and if successful writes the signed PDF to the ARG3. The jsonOptions
	// contains information and instructions about the signature.
	CkTask *SignPdfAsync(CkJsonObject &jsonOptions, const char *outFilePath);


	// Verifies the Nth signature contained in the PDF, where the 1st signature is
	// indicated by an index of 0. Returns true if the signature valid, otherwise
	// returns false. The sigInfo is an output argument and is populated with
	// information about the validated or unvalidated signature.
	bool VerifySignature(int index, CkJsonObject &sigInfo);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
