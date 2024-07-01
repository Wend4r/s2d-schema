#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
class CMorphConstraint : public CBaseConstraint
{
public:
	CUtlString m_sTargetMorph; // 0x68	
	int32_t m_nSlaveChannel; // 0x70	
	float m_flMin; // 0x74	
	float m_flMax; // 0x78	
};

