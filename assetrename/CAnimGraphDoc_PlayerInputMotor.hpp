#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Player Input Motor"
class CAnimGraphDoc_PlayerInputMotor : public CAnimGraphDoc_Motor
{
public:
	// MPropertyFriendlyName "Sample Times"
	CUtlVector< float32 > m_sampleTimes; // 0x30	
	// MPropertyFriendlyName "Use Acceleration"
	bool m_bUseAcceleration; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0049[0x3]; // 0x49
public:
	// MPropertyFriendlyName "Spring Constant"
	float m_flSpringConstant; // 0x4c	
	// MPropertyFriendlyName "Anticipation Distance"
	float m_flAnticipationDistance; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	// MPropertyHideField
	CUtlString m_anticipationPosParamName; // 0x58	
	// MPropertyFriendlyName "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_anticipationPosParam; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyHideField
	CUtlString m_anticipationHeadingParamName; // 0x68	
	// MPropertyFriendlyName "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_anticipationHeadingParam; // 0x70	
};

