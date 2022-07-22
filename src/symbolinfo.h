#ifndef _SYMBOLINFO_H
#define _SYMBOLINFO_H

#include "_global.h"

extern duint symbolDownloadingBase;

void SymEnum(duint Base, CBSYMBOLENUM EnumCallback, void* UserData);
void SymEnumFromCache(duint Base, CBSYMBOLENUM EnumCallback, void* UserData);
bool SymGetModuleList(std::vector<SYMBOLMODULEINFO>* List);
void SymUpdateModuleList();
bool SymDownloadSymbol(duint Base, const char* SymbolStore);
void SymDownloadAllSymbols(const char* SymbolStore);
bool SymAddrFromName(const char* Name, duint* Address);
String SymGetSymbolicName(duint Address, bool IncludeAddress = true);

/**
\brief Gets the source code file name and line from an address.
\param cip The address to check.
\param [out] szFileName Source code file. Buffer of MAX_STRING_SIZE length. UTF-8. Can be null.
\param [out] nLine Line number. Can be null.
\return true if it succeeds, false if it fails.
*/
bool SymGetSourceLine(duint Cip, char* FileName, int* Line, duint* displacement = nullptr);

bool SymGetSourceAddr(duint Module, const char* FileName, int Line, duint* Address);

#endif // _SYMBOLINFO_H