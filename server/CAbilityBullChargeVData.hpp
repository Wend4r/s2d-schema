#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBullChargeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x14f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_ModifierTossAirControlLockout; // 0x1570	
	CEmbeddedSubclass< CBaseModifier > m_ModifierWeaponPowerIncrease; // 0x1580	
	CEmbeddedSubclass< CBaseModifier > m_ModifierChargeDragEnemy; // 0x1590	
	CEmbeddedSubclass< CBaseModifier > m_ModifierBullCharging; // 0x15a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWallSlamSound; // 0x15b0	
	// MPropertyStartGroup "GamePlay"
	float m_flWallStunLookAheadDist; // 0x15c0	
};

