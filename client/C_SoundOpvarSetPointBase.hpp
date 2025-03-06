#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x530
// Has VTable
// 
// MNetworkVarNames "string_t m_iszStackName"
// MNetworkVarNames "string_t m_iszOperatorName"
// MNetworkVarNames "string_t m_iszOpvarName"
// MNetworkVarNames "int m_iOpvarIndex"
// MNetworkVarNames "bool m_bUseAutoCompare"
class C_SoundOpvarSetPointBase : public C_BaseEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x510	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x518	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x520	
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x528	
	// MNetworkEnable
	bool m_bUseAutoCompare; // 0x52c	
};

