#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc00
// Has VTable
// 
// MNetworkVarNames "bool m_bHasUsedCopiedUlt"
// MNetworkVarNames "bool m_bHasCopiedUlt"
// MNetworkVarNames "bool m_bIsModelSwapped"
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_pCopyUltimateAbility"
class CCitadel_Ability_Magician_CopyUlt : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0xe0]; // 0xb00
public:
	// MNetworkEnable
	bool m_bHasUsedCopiedUlt; // 0xbe0	
	// MNetworkEnable
	bool m_bHasCopiedUlt; // 0xbe1	
	// MNetworkEnable
	bool m_bIsModelSwapped; // 0xbe2	
private:
	[[maybe_unused]] uint8_t __pad0be3[0x1]; // 0xbe3
public:
	// MNetworkEnable
	CHandle< CCitadelBaseAbility > m_pCopyUltimateAbility; // 0xbe4	
};

