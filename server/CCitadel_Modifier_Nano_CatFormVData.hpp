#pragma once

#include <cstdint>

struct ModelChange_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x768
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Nano_CatFormVData : public CCitadelModifierVData
{
public:
	ModelChange_t m_ModelChange; // 0x658	
	float m_flModelScale; // 0x740	
private:
	[[maybe_unused]] uint8_t __pad0744[0x4]; // 0x744
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x748	
	CSoundEventName m_ImpactSound; // 0x758	
};

