#pragma once

#include <cstdint>

struct GameTime_t;
struct SatVolumeIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf0
// Has VTable
class CCitadel_Modifier_Knockdown : public CCitadel_Modifier_Stunned
{
public:
	QAngle m_angStunAngles; // 0xc8	
	EKnockDownTypes m_ePreferredKnockdownType; // 0xd4	
	bool m_bForceTakePreferred; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00d9[0x3]; // 0xd9
public:
	GameTime_t m_flGetUpAnimTime; // 0xdc	
	bool m_bGetUpCamSeqStarted; // 0xe0	
	bool m_bOnGroundDuration; // 0xe1	
private:
	[[maybe_unused]] uint8_t __pad00e2[0x2]; // 0xe2
public:
	SatVolumeIndex_t m_satIndex; // 0xe4	
};

