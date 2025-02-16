#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1650
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Fathom_ReefdwellerHarpoon_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff > m_DetachBuff; // 0x1590	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSwapStarted; // 0x15a0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x15b0	
	// MPropertyStartGroup "+Harpoon Properties"
	float m_flAirSpeedMax; // 0x1638	
	float m_flFallSpeedMax; // 0x163c	
	float m_flAirDrag; // 0x1640	
	float m_flInitialSlowSpeed; // 0x1644	
	float m_flInitialSpeedBias; // 0x1648	
	float m_flMaxSurfacePitch; // 0x164c	
};

