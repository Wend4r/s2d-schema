#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb40
// Has VTable
class CCitadel_ArmorUpgrade_PersonalRejuvenator : public CCitadel_Item
{
public:
	bool m_bActivated; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0ac9[0x3]; // 0xac9
public:
	ParticleIndex_t m_nFxIndex; // 0xacc	
};

