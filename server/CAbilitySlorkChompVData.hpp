#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilitySlorkChompVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_ChompHobbled; // 0x14f0	
	CEmbeddedSubclass< CBaseModifier > m_ChompGrapple; // 0x1500	
};

