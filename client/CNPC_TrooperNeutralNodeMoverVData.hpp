#pragma once

#include <cstdint>

struct CRangeFloat;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1190
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralNodeMoverVData : public CNPC_TrooperNeutralVData
{
public:
	// MPropertyStartGroup "Node Movement"
	bool m_bEnableMovementToNodes; // 0x1168	
private:
	[[maybe_unused]] uint8_t __pad1169[0x3]; // 0x1169
public:
	CRangeFloat m_flExposedDuration; // 0x116c	
	CRangeFloat m_flHideDuration; // 0x1174	
private:
	[[maybe_unused]] uint8_t __pad117c[0x4]; // 0x117c
public:
	CEmbeddedSubclass< CCitadelModifier > m_HidingModifier; // 0x1180	
};

