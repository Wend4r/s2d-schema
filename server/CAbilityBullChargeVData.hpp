#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1788
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBullChargeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_ModifierTossAirControlLockout; // 0x1650	
	CEmbeddedSubclass< CBaseModifier > m_ModifierWeaponPowerIncrease; // 0x1660	
	CEmbeddedSubclass< CBaseModifier > m_ModifierChargeDragEnemy; // 0x1670	
	CEmbeddedSubclass< CBaseModifier > m_ModifierBullCharging; // 0x1680	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // 0x1690	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWallSlamSound; // 0x1770	
	// MPropertyStartGroup "GamePlay"
	float m_flWallStunLookAheadDist; // 0x1780	
	float m_flEndChargeVelocityScale; // 0x1784	
};

