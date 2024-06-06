#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Turn Helper"
class CAnimGraphDoc_TurnHelperNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Turn to Face"
	AnimValueSource m_facingTarget; // 0x48	
	// MPropertyFriendlyName "Turn Start Time"
	float m_turnStartTime; // 0x4c	
	// MPropertyFriendlyName "Turn Duration"
	float m_turnDuration; // 0x50	
	// MPropertyFriendlyName "Match Child Duration"
	bool m_bMatchChildDuration; // 0x54	
	// MPropertyFriendlyName "Use Manual Turn Offset"
	bool m_bUseManualTurnOffset; // 0x55	
private:
	[[maybe_unused]] uint8_t __pad0056[0x2]; // 0x56
public:
	// MPropertyFriendlyName "Manual Turn Offset"
	float m_manualTurnOffset; // 0x58	
};

