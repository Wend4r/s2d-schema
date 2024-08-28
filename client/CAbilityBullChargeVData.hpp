#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBullChargeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x14e8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_ModifierTossAirControlLockout; // 0x1568	
	CEmbeddedSubclass< CBaseModifier > m_ModifierWeaponPowerIncrease; // 0x1578	
	CEmbeddedSubclass< CBaseModifier > m_ModifierChargeDragEnemy; // 0x1588	
	CEmbeddedSubclass< CBaseModifier > m_ModifierBullCharging; // 0x1598	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWallSlamSound; // 0x15a8	
	// MPropertyStartGroup "GamePlay"
	float m_flWallStunLookAheadDist; // 0x15b8	
};

