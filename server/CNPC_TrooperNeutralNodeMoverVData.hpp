#pragma once

#include <cstdint>

struct CRangeFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x12c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralNodeMoverVData : public CNPC_TrooperNeutralVData
{
public:
	// MPropertyStartGroup "Node Movement"
	bool m_bEnableMovementToNodes; // 0x1298	
private:
	[[maybe_unused]] uint8_t __pad1299[0x3]; // 0x1299
public:
	CRangeFloat m_flExposedDuration; // 0x129c	
	CRangeFloat m_flHideDuration; // 0x12a4	
private:
	[[maybe_unused]] uint8_t __pad12ac[0x4]; // 0x12ac
public:
	CEmbeddedSubclass< CCitadelModifier > m_HidingModifier; // 0x12b0	
};

