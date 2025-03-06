#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1688
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Fathom_ReefdwellerHarpoon_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff > m_DetachBuff; // 0x15c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSwapStarted; // 0x15d8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x15e8	
	// MPropertyStartGroup "+Harpoon Properties"
	float m_flAirSpeedMax; // 0x1670	
	float m_flFallSpeedMax; // 0x1674	
	float m_flAirDrag; // 0x1678	
	float m_flInitialSlowSpeed; // 0x167c	
	float m_flInitialSpeedBias; // 0x1680	
	float m_flMaxSurfacePitch; // 0x1684	
};

