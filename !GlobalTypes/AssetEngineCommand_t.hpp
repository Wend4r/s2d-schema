#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
struct AssetEngineCommand_t
{
public:
	CBufferString m_Command; // 0x0	
	CBufferString m_Icon; // 0x10	
	CBufferString m_Description; // 0x20	
	bool m_bBringEngineToFront; // 0x30	
};

