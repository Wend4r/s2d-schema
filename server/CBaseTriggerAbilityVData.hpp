#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1508
// Has VTable
// 
// MGetKV3ClassDefaults
class CBaseTriggerAbilityVData : public CitadelAbilityVData
{
public:
	// MPropertyDescription "Which ability to fire a MODIFIER_EVENT_ABILITY_TRIGGER_ACTIVATED event to when this ability is triggered"
	CSubclassName< 4 > m_AbilityToTrigger; // 0x14f0	
	// MPropertyDescription "The mimumum amount of time after this ability has become active before the trigger can activate"
	float m_flMinCancelTime; // 0x1500	
	// MPropertyDescription "Which lesson to associate with activating this ability"
	ECitadelHintFeature m_eHintFeatureToMarkUsedOnTrigger; // 0x1504	
};

