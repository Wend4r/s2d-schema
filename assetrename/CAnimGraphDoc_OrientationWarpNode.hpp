#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
struct AnimParamID;
struct CAnimInputDamping;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Orientation Warp"
class CAnimGraphDoc_OrientationWarpNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Facing Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_facingPositionParamID; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Turn to Face"
	CAnimInputDamping m_damping; // 0x50	
};

