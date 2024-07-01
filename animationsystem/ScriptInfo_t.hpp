#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x58
// 
// MGetKV3ClassDefaults
struct ScriptInfo_t
{
public:
	CUtlString m_code; // 0x0	
	CUtlVector< CAnimParamHandle > m_paramsModified; // 0x8	
	CUtlVector< int32 > m_proxyReadParams; // 0x20	
	CUtlVector< int32 > m_proxyWriteParams; // 0x38	
	AnimScriptType m_eScriptType; // 0x50	
};

