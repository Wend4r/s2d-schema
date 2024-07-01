#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityKobunVData : public CitadelAbilityVData
{
public:
	Vector m_vSummonFollowOffset; // 0x14e0	
private:
	[[maybe_unused]] uint8_t __pad14ec[0x4]; // 0x14ec
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CloneModifier; // 0x14f0	
};

