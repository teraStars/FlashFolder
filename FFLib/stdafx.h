
#pragma once

#define WIN32_LEAN_AND_MEAN		// Exclude rarely used Windows-Headers

#define WINVER 0x0600
#define _WIN32_WINNT WINVER
#define _WIN32_WINDOWS WINVER 
#define _WIN32_IE 0x0600

// Defend some kind of buffer overrun possibilities.
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1

#pragma warning(disable:4995) // "deprecated" warnings caused by strsafe.h

//--- windows headers
#include <windows.h>
#include <commdlg.h>
#include <shobjidl.h>
#include <objbase.h>
#include <shlobj.h>
#include <dlgs.h>
#include <shlwapi.h>
#include <shellapi.h>
#include <uxtheme.h>
#include <vssym32.h>
#include <cpl.h>
#include <dwmapi.h>

//--- ATL headers
#include <atlfile.h>

//--- crt headers
#include <tchar.h>
#include <crtdbg.h>   //for _ASSERTE
#include <cstdio>
#include <memory>
using namespace std;

//--- STL headers
#include <vector>
#include <map>
#include <set>
#include <string>

// include after all STD headers to avoid false warnings
#include <strsafe.h>

//--- utilities
#include <tstring.h>
#include <Utils.h>
#include <GdiUtils.h>
#include <Profile.h>
#include <TotalCmdUtils.h>
#include <Registry.h>
#include <ExplorerUtils.h>

//--- common project files
#include "../common/Favorites.h"
#include "../common/ff_utils.h"
#include "../common/HistoryLst.h"
#include "../common/ProfileDefaults.h"
#include "../common/ProcessNames.h"
