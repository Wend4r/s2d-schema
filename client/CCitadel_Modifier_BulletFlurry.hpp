#pragma once

#include <cstdint>

struct GameTime_t;
struct SatVolumeIndex_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
class CCitadel_Modifier_BulletFlurry : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
public:
	float m_flRadius; // 0x1a0	
private:
	[[maybe_unused]] uint8_t __pad01a4[0x4]; // 0x1a4
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecShootTargets; // 0x1a8	
	int32_t m_nNumPlayersKilled; // 0x1c0	
	int32_t m_nShootIndex; // 0x1c4	
	int32_t m_nShootIndexNPC; // 0x1c8	
	int32_t m_nBurstShots; // 0x1cc	
	GameTime_t m_flNextAttackTime; // 0x1d0	
	SatVolumeIndex_t m_nSatVolumeIndex; // 0x1d4	
	ParticleIndex_t m_nEffectId; // 0x1d8	
	GameTime_t m_flNextSequenceChange; // 0x1dc	
	int32_t m_nCurrentPose; // 0x1e0	
};

