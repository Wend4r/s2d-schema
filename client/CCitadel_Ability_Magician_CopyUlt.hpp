#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd88
// Has VTable
// 
// MNetworkVarNames "bool m_bHasUsedCopiedUlt"
// MNetworkVarNames "bool m_bHasCopiedUlt"
// MNetworkVarNames "bool m_bIsModelSwapped"
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_pCopyUltimateAbility"
class CCitadel_Ability_Magician_CopyUlt : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0xe0]; // 0xca0
public:
	// MNetworkEnable
	bool m_bHasUsedCopiedUlt; // 0xd80	
	// MNetworkEnable
	bool m_bHasCopiedUlt; // 0xd81	
	// MNetworkEnable
	bool m_bIsModelSwapped; // 0xd82	
private:
	[[maybe_unused]] uint8_t __pad0d83[0x1]; // 0xd83
public:
	// MNetworkEnable
	CHandle< C_CitadelBaseAbility > m_pCopyUltimateAbility; // 0xd84	
};

