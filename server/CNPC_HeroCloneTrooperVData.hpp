#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe28
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_HeroCloneTrooperVData : public CAI_CitadelNPCVData
{
public:
	bool m_bMeleeOnly; // 0xe18	
	bool m_bChargeForward; // 0xe19	
private:
	[[maybe_unused]] uint8_t __pad0e1a[0x2]; // 0xe1a
public:
	float m_flMeleeChargeRange; // 0xe1c	
	bool m_bCloneOwnerWeapon; // 0xe20	
};

