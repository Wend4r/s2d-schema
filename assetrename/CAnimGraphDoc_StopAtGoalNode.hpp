#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
struct CAnimInputDamping;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Stop At Goal"
class CAnimGraphDoc_StopAtGoalNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Outer Stopping Radius"
	float m_flOuterRadius; // 0x48	
	// MPropertyFriendlyName "Inner Stopping Radius"
	float m_flInnerRadius; // 0x4c	
	// MPropertyFriendlyName "Maximum Speed Scale"
	float m_flMaxScale; // 0x50	
	// MPropertyFriendlyName "Minimum Speed Scale"
	float m_flMinScale; // 0x54	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x58	
};

