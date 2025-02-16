#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd0
// Has VTable
class CCitadel_ArmorUpgrade_PersonalRejuvenator : public CCitadel_Item
{
public:
	bool m_bActivated; // 0xb20	
private:
	[[maybe_unused]] uint8_t __pad0b21[0x3]; // 0xb21
public:
	ParticleIndex_t m_nFxIndex; // 0xb24	
};

