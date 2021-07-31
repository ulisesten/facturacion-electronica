// This is a generated source file for Chilkat version 9.5.0.86
#ifndef _C_CkPkcs11WH
#define _C_CkPkcs11WH
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkPkcs11W_setAbortCheck(HCkPkcs11W cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkPkcs11W_setPercentDone(HCkPkcs11W cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkPkcs11W_setProgressInfo(HCkPkcs11W cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));
CK_C_VISIBLE_PUBLIC void CkPkcs11W_setTaskCompleted(HCkPkcs11W cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkPkcs11W CkPkcs11W_Create(void);
CK_C_VISIBLE_PUBLIC void CkPkcs11W_Dispose(HCkPkcs11W handle);
CK_C_VISIBLE_PUBLIC void CkPkcs11W_getDebugLogFilePath(HCkPkcs11W cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkPkcs11W_putDebugLogFilePath(HCkPkcs11W cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkPkcs11W_debugLogFilePath(HCkPkcs11W cHandle);
CK_C_VISIBLE_PUBLIC void CkPkcs11W_getLastErrorHtml(HCkPkcs11W cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkPkcs11W_lastErrorHtml(HCkPkcs11W cHandle);
CK_C_VISIBLE_PUBLIC void CkPkcs11W_getLastErrorText(HCkPkcs11W cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkPkcs11W_lastErrorText(HCkPkcs11W cHandle);
CK_C_VISIBLE_PUBLIC void CkPkcs11W_getLastErrorXml(HCkPkcs11W cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkPkcs11W_lastErrorXml(HCkPkcs11W cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkPkcs11W_getLastMethodSuccess(HCkPkcs11W cHandle);
CK_C_VISIBLE_PUBLIC void  CkPkcs11W_putLastMethodSuccess(HCkPkcs11W cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkPkcs11W_getVerboseLogging(HCkPkcs11W cHandle);
CK_C_VISIBLE_PUBLIC void  CkPkcs11W_putVerboseLogging(HCkPkcs11W cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkPkcs11W_getVersion(HCkPkcs11W cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkPkcs11W_version(HCkPkcs11W cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkPkcs11W_SaveLastError(HCkPkcs11W cHandle, const wchar_t *path);
CK_C_VISIBLE_PUBLIC BOOL CkPkcs11W_Test123(HCkPkcs11W cHandle);
CK_C_VISIBLE_PUBLIC HCkTaskW CkPkcs11W_Test123Async(HCkPkcs11W cHandle);
#endif
