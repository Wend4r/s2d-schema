#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb38
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BasePlayerPawn > m_hTouchedPlayeres"
class C_ItemWeaponParts : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x20]; // 0xb00
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_hTouchedPlayeres; // 0xb20	
};

