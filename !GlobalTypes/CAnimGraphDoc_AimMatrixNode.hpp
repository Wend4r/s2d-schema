#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
struct AnimParamID;
struct CBlendCurve;
struct CAnimInputDamping;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xb8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Aim Matrix"
class CAnimGraphDoc_AimMatrixNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x48	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x50	
	// MPropertyFriendlyName "Max Yaw Angle"
	float m_flMaxYawAngle; // 0x58	
	// MPropertyFriendlyName "Max Pitch Angle"
	float m_flMaxPitchAngle; // 0x5c	
	// MPropertyFriendlyName "Target"
	AnimVectorSource m_target; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x68	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0074[0x4]; // 0x74
public:
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x78	
	// MPropertyFriendlyName "Blend Mode"
	// MPropertyAttrChangeCallback
	AimMatrixBlendMode m_blendMode; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
public:
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	// MPropertyAttrStateCallback
	CUtlString m_boneMaskName; // 0x88	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x90	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x91	
	// MPropertyFriendlyName "Use Bias + Clamp"
	// MPropertyAttrChangeCallback
	bool m_bUseBiasAndClamp; // 0x92	
private:
	[[maybe_unused]] uint8_t __pad0093[0x1]; // 0x93
public:
	// MPropertyFriendlyName "Yaw Offset Angle"
	// MPropertyAttrStateCallback
	float m_flBiasAndClampYawOffset; // 0x94	
	// MPropertyFriendlyName "Pitch Offset Angle"
	// MPropertyAttrStateCallback
	float m_flBiasAndClampPitchOffset; // 0x98	
	// MPropertyFriendlyName "Clamp Blend Curve"
	// MPropertyAttributeEditor "AnimGraphBlendCurve()"
	// MPropertyAttrStateCallback
	CBlendCurve m_biasAndClampBlendCurve; // 0x9c	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0xa8	
};

