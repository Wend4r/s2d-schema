#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xe0
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocStateNode : public CNmGraphDocStateMachineGraphNode
{
public:
	// MPropertyHideField
	CNmGraphDocStateNode::StateType_t m_type; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyAttributeEditor "AnimGraphID()"
	// MPropertyAutoExpandSelf
	CUtlVector< CGlobalSymbol > m_events; // 0x50	
	// MPropertyGroupName "+Phase Events"
	// MPropertyAttributeEditor "AnimGraphID()"
	CUtlVector< CGlobalSymbol > m_entryEvents; // 0x68	
	// MPropertyGroupName "+Phase Events"
	// MPropertyAttributeEditor "AnimGraphID()"
	CUtlVector< CGlobalSymbol > m_executeEvents; // 0x80	
	// MPropertyGroupName "+Phase Events"
	// MPropertyAttributeEditor "AnimGraphID()"
	CUtlVector< CGlobalSymbol > m_exitEvents; // 0x98	
	// MPropertyGroupName "+Timed Events"
	CUtlVector< CNmGraphDocStateNode::TimedStateEvent_t > m_timeRemainingEvents; // 0xb0	
	// MPropertyGroupName "+Timed Events"
	CUtlVector< CNmGraphDocStateNode::TimedStateEvent_t > m_timeElapsedEvents; // 0xc8	
};

