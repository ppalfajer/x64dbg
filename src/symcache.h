#pragma once

#include "_global.h"

#include "symbolsourcebase.h"

bool SymbolFromAddressExact(duint address, SymbolInfo & symInfo);
bool SymbolFromAddressExactOrLower(duint address, SymbolInfo & symInfo);

/*bool SymbolFromAddr(duint addr, SymbolInfo & symbol);
bool SymbolFromName(const char* name, SymbolInfo & symbol);
bool SymbolAdd(const SymbolInfo & symbol);
bool SymbolAddRange(duint start, duint size);
bool SymbolDelRange(duint addr);

bool LineFromAddr(duint addr, LineInfo & line);
bool LineFromName(const char* sourceFile, int lineNumber, LineInfo & line);
bool LineAdd(const LineInfo & line);
bool LineAddRange(duint start, duint size);
bool LineDelRange(duint addr);*/