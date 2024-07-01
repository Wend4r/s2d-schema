#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nInputControlPoint; // 0x1c0	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputControlPoint; // 0x1c4	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nInputField; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x1cc	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1d0	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d4	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d8	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1dc	
	// MPropertyFriendlyName "use the derivative"
	bool m_bDerivative; // 0x1e0	
private:
	[[maybe_unused]] uint8_t __pad01e1[0x3]; // 0x1e1
public:
	// MPropertyFriendlyName "interpolation"
	float m_flInterpRate; // 0x1e4	
};

