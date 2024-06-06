#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
struct AnimParamID;
struct CAnimInputDamping;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Look At"
class CAnimGraphDoc_LookAtNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Target"
	// MPropertyAttrChangeCallback
	AnimVectorSource m_target; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x50	
	// MPropertyFriendlyName "Target Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x58	
	// MPropertyFriendlyName "Parameter is a Position"
	// MPropertyAttrStateCallback
	bool m_bIsPosition; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad005d[0x3]; // 0x5d
public:
	// MPropertyHideField
	CUtlString m_weightParamName; // 0x60	
	// MPropertyFriendlyName "Weight Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_weightParam; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	// MPropertyFriendlyName "LookAt Chain"
	// MPropertyAttributeChoiceName "LookAtChain"
	CUtlString m_lookatChainName; // 0x70	
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x78	
	// MPropertyFriendlyName "Rotate Through Forward"
	// MPropertyGroupName "Rotation Limits"
	// MPropertyAttrChangeCallback
	bool m_bRotateYawForward; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
public:
	// MPropertyFriendlyName "Yaw Limit"
	// MPropertyAttributeRange "0 180"
	// MPropertyGroupName "Rotation Limits"
	// MPropertyAttrStateCallback
	float m_flYawLimit; // 0x84	
	// MPropertyFriendlyName "Pitch Limit"
	// MPropertyAttributeRange "0 90"
	// MPropertyGroupName "Rotation Limits"
	float m_flPitchLimit; // 0x88	
	// MPropertyFriendlyName "Maintain Up Direction"
	bool m_bMaintainUpDirection; // 0x8c	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x8d	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x8e	
	// MPropertyFriendlyName "Use Hysteresis"
	// MPropertyGroupName "Hysteresis"
	bool m_bUseHysteresis; // 0x8f	
	// MPropertyFriendlyName "Inner Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisInnerAngle; // 0x90	
	// MPropertyFriendlyName "Outer Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisOuterAngle; // 0x94	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x98	
};

