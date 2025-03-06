#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1650
// Has VTable
// 
// MGetKV3ClassDefaults
class CBaseDashCastAbilityVData : public CitadelAbilityVData
{
public:
	CSubclassName< 4 > m_AbilityToTrigger; // 0x15c8	
	// MPropertyDescription "How big of a trigger to use when tracing for targets"
	float m_flDashCastTriggerRadius; // 0x15d8	
	// MPropertyDescription "How fast the dash should go.  When using the curve, the dash will travel this speen when y=1"
	float m_flDashSpeed; // 0x15dc	
	// MPropertyDescription "When true, speed will be set to 0 when the dash cast ends"
	bool m_bSnapToZeroSpeedOnEnd; // 0x15e0	
	// MPropertyDescription "When true, use the curve below to scale the speed of the dash across the distance."
	bool m_bUseCurveToDefineSpeed; // 0x15e1	
private:
	[[maybe_unused]] uint8_t __pad15e2[0x6]; // 0x15e2
public:
	// MPropertySuppressExpr "m_bUseCurveToDefineSpeed == false"
	CPiecewiseCurve m_MovementSpeedCurve; // 0x15e8	
	// MPropertySuppressField
	float m_flMovementSpeedCurveAvgSpeed; // 0x1628	
private:
	[[maybe_unused]] uint8_t __pad162c[0x4]; // 0x162c
public:
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Sound to play if we hit a target."
	CSoundEventName m_strTargetHitSound; // 0x1630	
	// MPropertyDescription "Sound to play if miss entirely.  Only the caster hears it."
	CSoundEventName m_strMissSound; // 0x1640	
};

