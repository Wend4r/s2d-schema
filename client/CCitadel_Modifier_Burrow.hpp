#pragma once

#include <cstdint>

struct SatVolumeIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x218
// Has VTable
class CCitadel_Modifier_Burrow : public CCitadelModifier
{
public:
	SatVolumeIndex_t m_nSatVolumeIndex; // 0xc0	
	GameTime_t m_flLastDamageTime; // 0xc4	
};

