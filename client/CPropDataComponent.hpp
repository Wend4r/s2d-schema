#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
class CPropDataComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	float m_flDmgModBullet; // 0x10	
	float m_flDmgModClub; // 0x14	
	float m_flDmgModExplosive; // 0x18	
	float m_flDmgModFire; // 0x1c	
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x20	
	CUtlSymbolLarge m_iszBasePropData; // 0x28	
	int32_t m_nInteractions; // 0x30	
	bool m_bSpawnMotionDisabled; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	int32_t m_nDisableTakePhysicsDamageSpawnFlag; // 0x38	
	int32_t m_nMotionDisabledSpawnFlag; // 0x3c	
};

