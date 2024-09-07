#pragma once

#include <cstdint>

struct GameTime_t;
struct SatVolumeIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x308
// Has VTable
class CCitadel_Modifier_StormCloud : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x8]; // 0xc8
public:
	float m_flDamageInterval; // 0xd0	
	bool m_bGrowing; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00d5[0x3]; // 0xd5
public:
	GameTime_t m_flLastDamageWaveTime; // 0xd8	
	int32_t m_nNumPlayersKilled; // 0xdc	
	GameTime_t m_flNextRandomLightningStrike; // 0xe0	
	GameTime_t m_flStartTime; // 0xe4	
	float m_flRadiusIncrementPerSecond; // 0xe8	
	Vector m_vCastPosition; // 0xec	
	bool m_bFiredEndingSoonSound; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00f9[0x3]; // 0xf9
public:
	int32_t m_nLastTickForLightningCenterCalc; // 0xfc	
	Vector m_vecLightningCenter; // 0x100	
	SatVolumeIndex_t m_nSatVolumeIndex; // 0x10c	
};

