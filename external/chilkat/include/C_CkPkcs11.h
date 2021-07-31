// This is a generated source file for Chilkat version 9.5.0.86
#ifndef _C_CkPkcs11_H
#define _C_CkPkcs11_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkPkcs11_setAbortCheck(HCkPkcs11 cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkPkcs11_setPercentDone(HCkPkcs11 cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkPkcs11_setProgressInfo(HCkPkcs11 cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_C_VISIBLE_PUBLIC void CkPkcs11_setTaskCompleted(HCkPkcs11 cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_C_VISIBLE_PUBLIC void CkPkcs11_setAbortCheck2(HCkPkcs11 cHandle, BOOL (*fnAbortCheck2)(void *pContext));
CK_C_VISIBLE_PUBLIC void CkPkcs11_setPercentDone2(HCkPkcs11 cHandle, BOOL (*fnPercentDone2)(int pctDone, void *pContext));
CK_C_VISIBLE_PUBLIC void CkPkcs11_setProgressInfo2(HCkPkcs11 cHandle, void (*fnProgressInfo2)(const char *name, const char *value, void *pContext));
CK_C_VISIBLE_PUBLIC void CkPkcs11_setTaskCompleted2(HCkPkcs11 cHandle, void (*fnTaskCompleted2)(HCkTask hTask, void *pContext));

// setExternalProgress is for C callback functions defined in the external programming language (such as Go)
CK_C_VISIBLE_PUBLIC void CkPkcs11_setExternalProgress(HCkPkcs11 cHandle, BOOL on);
CK_C_VISIBLE_PUBLIC void CkPkcs11_setCallbackContext(HCkPkcs11 cHandle, void *pContext);

CK_C_VISIBLE_PUBLIC HCkPkcs11 CkPkcs11_Create(void);
CK_C_VISIBLE_PUBLIC void CkPkcs11_Dispose(HCkPkcs11 handle);
CK_C_VISIBLE_PUBLIC void CkPkcs11_getDebugLogFilePath(HCkPkcs11 cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkPkcs11_putDebugLogFilePath(HCkPkcs11 cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkPkcs11_debugLogFilePath(HCkPkcs11 cHandle);
CK_C_VISIBLE_PUBLIC void CkPkcs11_getLastErrorHtml(HCkPkcs11 cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkPkcs11_lastErrorHtml(HCkPkcs11 cHandle);
CK_C_VISIBLE_PUBLIC void CkPkcs11_getLastErrorText(HCkPkcs11 cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkPkcs11_lastErrorText(HCkPkcs11 cHandle);
CK_C_VISIBLE_PUBLIC void CkPkcs11_getLastErrorXml(HCkPkcs11 cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkPkcs11_lastErrorXml(HCkPkcs11 cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkPkcs11_getLastMethodSuccess(HCkPkcs11 cHandle);
CK_C_VISIBLE_PUBLIC void CkPkcs11_putLastMethodSuccess(HCkPkcs11 cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkPkcs11_getUtf8(HCkPkcs11 cHandle);
CK_C_VISIBLE_PUBLIC void CkPkcs11_putUtf8(HCkPkcs11 cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkPkcs11_getVerboseLogging(HCkPkcs11 cHandle);
CK_C_VISIBLE_PUBLIC void CkPkcs11_putVerboseLogging(HCkPkcs11 cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkPkcs11_getVersion(HCkPkcs11 cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkPkcs11_version(HCkPkcs11 cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkPkcs11_SaveLastError(HCkPkcs11 cHandle, const char *path);
CK_C_VISIBLE_PUBLIC BOOL CkPkcs11_Test123(HCkPkcs11 cHandle);
CK_C_VISIBLE_PUBLIC HCkTask CkPkcs11_Test123Async(HCkPkcs11 cHandle);
#endif
