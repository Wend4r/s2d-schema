#pragma once

#include <cstdint>

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0xb0
// 
// MGetKV3ClassDefaults
class CFuseSymbolTable
{
public:
	CUtlVector< ConstantInfo_t > m_constants; // 0x0	
	CUtlVector< VariableInfo_t > m_variables; // 0x18	
	CUtlVector< FunctionInfo_t > m_functions; // 0x30	
	CUtlHashtable< CUtlStringToken, int32 > m_constantMap; // 0x48	
	CUtlHashtable< CUtlStringToken, int32 > m_variableMap; // 0x68	
	CUtlHashtable< CUtlStringToken, int32 > m_functionMap; // 0x88	
};

