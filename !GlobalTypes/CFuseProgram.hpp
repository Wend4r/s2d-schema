#pragma once

#include <cstdint>

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0x50
// 
// MGetKV3ClassDefaults
class CFuseProgram
{
public:
	CUtlVector< uint8 > m_programBuffer; // 0x0	
	CUtlVector< FuseVariableIndex_t > m_variablesRead; // 0x18	
	CUtlVector< FuseVariableIndex_t > m_variablesWritten; // 0x30	
	int32_t m_nMaxTempVarsUsed; // 0x48	
};

