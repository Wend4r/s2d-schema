#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTransitionConduit : public CNmGraphDocStateMachineGraphNode
{
public:
	float m_flTransitionProgress; // 0x40	
	V_uuid_t m_startStateID; // 0x44	
	V_uuid_t m_endStateID; // 0x54	
};

