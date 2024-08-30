#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_FlameDashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlameDashModifier; // 0x14f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DashBurstSound; // 0x1500	
	CSoundEventName m_ChargeHitSound; // 0x1510	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSpeedBoost; // 0x1520	
};

