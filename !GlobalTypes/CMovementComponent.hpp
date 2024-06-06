#pragma once

#include <cstdint>

struct CAnimInputDamping;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xe8
// Has VTable
// 
// MGetKV3ClassDefaults
class CMovementComponent : public CAnimGraphDoc_Component
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_Motor > > m_motors; // 0x38	
	// MPropertyFriendlyName "Network Path"
	bool m_bNetworkPath; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x7]; // 0x51
public:
	// MPropertyGroupName "+Facing"
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_facingDamping; // 0x58	
	// MPropertyGroupName "+Facing"
	// MPropertyFriendlyName "Network Facing"
	bool m_bNetworkFacing; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
public:
	// MPropertyHideField
	AnimParamID m_paramIDs[30]; // 0x6c	
};

