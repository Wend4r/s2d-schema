#pragma once

#include <cstdint>

struct AISound_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x34
// Has Trivial Destructor
class CSound
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0x0	
	CHandle< CBaseEntity > m_hTarget; // 0x4	
	int32_t m_iVolume; // 0x8	
	float m_flOcclusionScale; // 0xc	
	AISound_t m_Sound; // 0x10	
	int32_t m_iNextAudible; // 0x14	
	GameTime_t m_flExpireTime; // 0x18	
	int16_t m_iNext; // 0x1c	
	bool m_bNoExpirationTime; // 0x1e	
private:
	[[maybe_unused]] uint8_t __pad001f[0x1]; // 0x1f
public:
	int32_t m_ownerChannelIndex; // 0x20	
	Vector m_vecOrigin; // 0x24	
	bool m_bHasOwner; // 0x30	
};

