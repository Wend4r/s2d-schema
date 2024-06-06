#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x80
// 
// MGetKV3ClassDefaults
class CExternalToolInfo : public CBaseToolInfo
{
public:
	CUtlString m_Executable; // 0x20	
	CUtlString m_Args; // 0x28	
	CUtlString m_ArgsWithLineColumn; // 0x30	
	CUtlString m_WorkingDir; // 0x38	
	CUtlString m_MatchSystemExecutable; // 0x40	
	CUtlVector< CUtlString > m_SupportedExts; // 0x48	
	CUtlVector< CUtlString > m_PriorityExts; // 0x60	
	bool m_bDebugCommandline; // 0x78	
};

