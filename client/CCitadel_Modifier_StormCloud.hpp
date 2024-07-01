#pragma once

#include <cstdint>

struct GameTime_t;
struct SatVolumeIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2e8
// Has VTable
class CCitadel_Modifier_StormCloud : public CCitadelModifier
{
public:
	GameTime_t m_flNextRandomLightningStrike; // 0xc0	
	GameTime_t m_flStartTime; // 0xc4	
	float m_flRadiusIncrementPerSecond; // 0xc8	
	Vector m_vCastPosition; // 0xcc	
	bool m_bFiredEndingSoonSound; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00d9[0x3]; // 0xd9
public:
	int32_t m_nLastTickForLightningCenterCalc; // 0xdc	
	Vector m_vecLightningCenter; // 0xe0	
	SatVolumeIndex_t m_nSatVolumeIndex; // 0xec	
};

