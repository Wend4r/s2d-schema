#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityKobunVData : public CitadelAbilityVData
{
public:
	Vector m_vSummonFollowOffset; // 0x15c8	
private:
	[[maybe_unused]] uint8_t __pad15d4[0x4]; // 0x15d4
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CloneModifier; // 0x15d8	
};

