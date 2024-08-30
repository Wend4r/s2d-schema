#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba8
// Has VTable
class CCitadel_ArmorUpgrade_PersonalRejuvenator : public CCitadel_Item
{
public:
	bool m_bActivated; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0af9[0x3]; // 0xaf9
public:
	ParticleIndex_t m_nFxIndex; // 0xafc	
};

