#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBullChargeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_ModifierTossAirControlLockout; // 0x1560	
	CEmbeddedSubclass< CBaseModifier > m_ModifierWeaponPowerIncrease; // 0x1570	
	CEmbeddedSubclass< CBaseModifier > m_ModifierChargeDragEnemy; // 0x1580	
	CEmbeddedSubclass< CBaseModifier > m_ModifierBullCharging; // 0x1590	
};

