#pragma once

#include <cstdint>

struct CCitadelAbilityBeam_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
// MNetworkVarNames "CCitadelAbilityBeam_t m_beam"
class CCitadel_Ability_Bebop_LaserBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x380]; // 0xc50
public:
	bool m_bZoomed; // 0xfd0	
	// MNetworkEnable
	bool m_bAirCast; // 0xfd1	
private:
	[[maybe_unused]] uint8_t __pad0fd2[0x6]; // 0xfd2
public:
	// MNetworkEnable
	CCitadelAbilityBeam_t m_beam; // 0xfd8	
};

