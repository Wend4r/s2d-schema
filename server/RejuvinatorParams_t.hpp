#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// 
// MGetKV3ClassDefaults
struct RejuvinatorParams_t
{
public:
	float m_flRejuvinatorExpirationWarningTiming; // 0x0	
	float m_flRejuvinatorBuffDuration; // 0x4	
	float m_flRejuvinatorDropHeight; // 0x8	
	float m_flRejuvinatorDropHeight3LaneMap; // 0xc	
	float m_flRejuvinatorDropDuration; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CUtlVector< float32 > m_TrooperHealthMult; // 0x18	
	CUtlVector< float32 > m_PlayerRespawnMult; // 0x30	
	CSoundEventName m_strRejuvPickupSound; // 0x48	
};

