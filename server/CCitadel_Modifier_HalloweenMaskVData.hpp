#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x740
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_HalloweenMaskVData : public CCitadelModifierVData
{
public:
	int32_t m_nNumMasks; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad065c[0x4]; // 0x65c
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HalloweenMask; // 0x660	
};

