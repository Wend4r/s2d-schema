#pragma once

#include <cstdint>

struct CRangeFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1700
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralNodeMoverVData : public CNPC_TrooperNeutralVData
{
public:
	// MPropertyStartGroup "Node Movement"
	bool m_bEnableMovementToNodes; // 0x16d8	
private:
	[[maybe_unused]] uint8_t __pad16d9[0x3]; // 0x16d9
public:
	CRangeFloat m_flExposedDuration; // 0x16dc	
	CRangeFloat m_flHideDuration; // 0x16e4	
private:
	[[maybe_unused]] uint8_t __pad16ec[0x4]; // 0x16ec
public:
	CEmbeddedSubclass< CCitadelModifier > m_HidingModifier; // 0x16f0	
};

