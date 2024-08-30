#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityKobunVData : public CitadelAbilityVData
{
public:
	Vector m_vSummonFollowOffset; // 0x14f0	
private:
	[[maybe_unused]] uint8_t __pad14fc[0x4]; // 0x14fc
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CloneModifier; // 0x1500	
};

