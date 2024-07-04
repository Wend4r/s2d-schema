#pragma once

#include <cstdint>

struct CRangeFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x11a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralNodeMoverVData : public CNPC_TrooperNeutralVData
{
public:
	// MPropertyStartGroup "Node Movement"
	bool m_bEnableMovementToNodes; // 0x1180	
private:
	[[maybe_unused]] uint8_t __pad1181[0x3]; // 0x1181
public:
	CRangeFloat m_flExposedDuration; // 0x1184	
	CRangeFloat m_flHideDuration; // 0x118c	
private:
	[[maybe_unused]] uint8_t __pad1194[0x4]; // 0x1194
public:
	CEmbeddedSubclass< CCitadelModifier > m_HidingModifier; // 0x1198	
};

