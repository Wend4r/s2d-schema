#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputControlPoint; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x1c4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d4	
	// MPropertyFriendlyName "sound stack name"
	CUtlString m_StackName; // 0x1d8	
	// MPropertyFriendlyName "sound operator name"
	CUtlString m_OperatorName; // 0x1e0	
	// MPropertyFriendlyName "sound field name"
	CUtlString m_FieldName; // 0x1e8	
};

