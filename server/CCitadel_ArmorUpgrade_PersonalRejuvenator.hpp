#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb80
// Has VTable
class CCitadel_ArmorUpgrade_PersonalRejuvenator : public CCitadel_Item
{
public:
	bool m_bActivated; // 0xad0	
private:
	[[maybe_unused]] uint8_t __pad0ad1[0x3]; // 0xad1
public:
	ParticleIndex_t m_nFxIndex; // 0xad4	
};

