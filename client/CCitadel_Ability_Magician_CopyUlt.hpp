#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd38
// Has VTable
// 
// MNetworkVarNames "bool m_bHasUsedCopiedUlt"
// MNetworkVarNames "bool m_bHasCopiedUlt"
// MNetworkVarNames "bool m_bIsModelSwapped"
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_pCopyUltimateAbility"
class CCitadel_Ability_Magician_CopyUlt : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0xe0]; // 0xc50
public:
	// MNetworkEnable
	bool m_bHasUsedCopiedUlt; // 0xd30	
	// MNetworkEnable
	bool m_bHasCopiedUlt; // 0xd31	
	// MNetworkEnable
	bool m_bIsModelSwapped; // 0xd32	
private:
	[[maybe_unused]] uint8_t __pad0d33[0x1]; // 0xd33
public:
	// MNetworkEnable
	CHandle< C_CitadelBaseAbility > m_pCopyUltimateAbility; // 0xd34	
};

