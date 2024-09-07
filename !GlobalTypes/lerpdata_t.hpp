#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has Trivial Destructor
struct lerpdata_t
{
public:
	CHandle< CBaseEntity > m_hEnt; // 0x0	
	MoveType_t m_MoveType; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	GameTime_t m_flStartTime; // 0x8	
	Vector m_vecStartOrigin; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	Quaternion m_qStartRot; // 0x20	
	ParticleIndex_t m_nFXIndex; // 0x30	
	
	// Datamap fields:
	// void m_nSound; // 0x34
};

