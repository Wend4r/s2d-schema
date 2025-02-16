#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x910
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_LurkersAmbush_InvisVData : public CCitadel_Modifier_InvisVData
{
public:
	// MPropertyStartGroup "+Properties"
	float m_flMaxCameraAngleForSeeing; // 0x900	
	// MPropertyDescription "Max distance a player can look at Fathom to reveal him"
	float m_flMaxDistanceForSeeing; // 0x904	
	// MPropertyDescription "Visual bias on how the invis is applied"
	float m_flInvisBias; // 0x908	
	// MPropertyDescription "How long a player needs to look at Fathom before the invis even starts to reveal"
	float m_flSpottedMinTimeToStart; // 0x90c	
};

