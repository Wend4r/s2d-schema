#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe10
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_HeroCloneTrooperVData : public CAI_CitadelNPCVData
{
public:
	bool m_bMeleeOnly; // 0xe00	
	bool m_bChargeForward; // 0xe01	
private:
	[[maybe_unused]] uint8_t __pad0e02[0x2]; // 0xe02
public:
	float m_flMeleeChargeRange; // 0xe04	
	bool m_bCloneOwnerWeapon; // 0xe08	
};

