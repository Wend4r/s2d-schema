#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1568
// Has VTable
// 
// MGetKV3ClassDefaults
class CBaseDashCastAbilityVData : public CitadelAbilityVData
{
public:
	CSubclassName< 4 > m_AbilityToTrigger; // 0x14e0	
	// MPropertyDescription "How big of a trigger to use when tracing for targets"
	float m_flDashCastTriggerRadius; // 0x14f0	
	// MPropertyDescription "How fast the dash should go.  When using the curve, the dash will travel this speen when y=1"
	float m_flDashSpeed; // 0x14f4	
	// MPropertyDescription "When true, speed will be set to 0 when the dash cast ends"
	bool m_bSnapToZeroSpeedOnEnd; // 0x14f8	
	// MPropertyDescription "When true, use the curve below to scale the speed of the dash across the distance."
	bool m_bUseCurveToDefineSpeed; // 0x14f9	
private:
	[[maybe_unused]] uint8_t __pad14fa[0x6]; // 0x14fa
public:
	// MPropertySuppressExpr "m_bUseCurveToDefineSpeed == false"
	CPiecewiseCurve m_MovementSpeedCurve; // 0x1500	
	// MPropertySuppressField
	float m_flMovementSpeedCurveAvgSpeed; // 0x1540	
private:
	[[maybe_unused]] uint8_t __pad1544[0x4]; // 0x1544
public:
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Sound to play if we hit a target."
	CSoundEventName m_strTargetHitSound; // 0x1548	
	// MPropertyDescription "Sound to play if miss entirely.  Only the caster hears it."
	CSoundEventName m_strMissSound; // 0x1558	
};

