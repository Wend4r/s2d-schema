#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb0
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_vecPulseTargets"
class CCitadel_Ability_PsychicPulse : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0x38]; // 0xc60
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecPulseTargets; // 0xc98	
};

