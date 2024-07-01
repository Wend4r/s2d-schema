#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xa80
// Has VTable
// 
// MNetworkVarNames "int m_iAbilitySlot"
class C_InWorldAbilityPanel : public C_PointClientUIWorldPanel
{
public:
	CHandle< C_CitadelPlayerPawn > m_hPlayer; // 0xa70	
private:
	[[maybe_unused]] uint8_t __pad0a74[0x4]; // 0xa74
public:
	// MNetworkEnable
	int32_t m_iAbilitySlot; // 0xa78	
};

