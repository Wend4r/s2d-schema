#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocRootMotionOverrideNode : public CNmGraphDocFlowNode
{
public:
	float m_flMaxLinearVelocity; // 0xf8	
	float m_flMaxAngularVelocityDegrees; // 0xfc	
	bool m_bOverrideMoveDirX; // 0x100	
	bool m_bOverrideMoveDirY; // 0x101	
	bool m_bOverrideMoveDirZ; // 0x102	
	bool m_bAllowPitchForFacing; // 0x103	
	bool m_bListenForRootMotionEvents; // 0x104	
};

