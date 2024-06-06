#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Steam Audio Direct Node"
// MPropertyDescription "Applies steam audio model for direct audio.  This includes modeling the loss due to transmission in air, directivity and occlusion effects."
class CMixSteamAudioDirect : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Apply Distance Attenuation"
	bool m_bApplyDistanceAttenuation; // 0x20	
	// MPropertyFriendlyName "Apply Air Absorption"
	bool m_bApplyAirAbsorption; // 0x21	
	// MPropertyFriendlyName "Apply Directivity"
	bool m_bApplyDirectivity; // 0x22	
	// MPropertyFriendlyName "Apply Occlusion"
	bool m_bApplyOcclusion; // 0x23	
	// MPropertyFriendlyName "Apply Transmission"
	bool m_bApplyTransmission; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	// MPropertyFriendlyName "Dipole Weight"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flDipoleWeight; // 0x28	
	// MPropertyFriendlyName "Dipole Power"
	// MPropertyAttributeRange "0.0 4.0"
	float m_flDipolePower; // 0x2c	
	// MPropertyFriendlyName "Occlusion Value"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flOcclusion; // 0x30	
	// MPropertyFriendlyName "Transmission Value (Low Freq)"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flTransmissionLow; // 0x34	
	// MPropertyFriendlyName "Transmission Value (Mid Freq)"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flTransmissionMid; // 0x38	
	// MPropertyFriendlyName "Transmission Value (High Freq)"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flTransmissionHigh; // 0x3c	
};

