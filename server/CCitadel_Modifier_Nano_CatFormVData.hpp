#pragma once

#include <cstdint>

struct ModelChange_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x748
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Nano_CatFormVData : public CCitadelModifierVData
{
public:
	ModelChange_t m_ModelChange; // 0x638	
	float m_flModelScale; // 0x720	
private:
	[[maybe_unused]] uint8_t __pad0724[0x4]; // 0x724
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x728	
	CSoundEventName m_ImpactSound; // 0x738	
};

