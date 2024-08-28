#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1570
// Has VTable
// 
// MGetKV3ClassDefaults
class CBaseDashCastAbilityVData : public CitadelAbilityVData
{
public:
	CSubclassName< 4 > m_AbilityToTrigger; // 0x14e8	
	// MPropertyDescription "How big of a trigger to use when tracing for targets"
	float m_flDashCastTriggerRadius; // 0x14f8	
	// MPropertyDescription "How fast the dash should go.  When using the curve, the dash will travel this speen when y=1"
	float m_flDashSpeed; // 0x14fc	
	// MPropertyDescription "When true, speed will be set to 0 when the dash cast ends"
	bool m_bSnapToZeroSpeedOnEnd; // 0x1500	
	// MPropertyDescription "When true, use the curve below to scale the speed of the dash across the distance."
	bool m_bUseCurveToDefineSpeed; // 0x1501	
private:
	[[maybe_unused]] uint8_t __pad1502[0x6]; // 0x1502
public:
	// MPropertySuppressExpr "m_bUseCurveToDefineSpeed == false"
	CPiecewiseCurve m_MovementSpeedCurve; // 0x1508	
	// MPropertySuppressField
	float m_flMovementSpeedCurveAvgSpeed; // 0x1548	
private:
	[[maybe_unused]] uint8_t __pad154c[0x4]; // 0x154c
public:
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Sound to play if we hit a target."
	CSoundEventName m_strTargetHitSound; // 0x1550	
	// MPropertyDescription "Sound to play if miss entirely.  Only the caster hears it."
	CSoundEventName m_strMissSound; // 0x1560	
};

