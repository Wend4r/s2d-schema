#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1658
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_Disarm_VData : public CCitadel_Item_TrackingProjectileApplyModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1638	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1648	
};

