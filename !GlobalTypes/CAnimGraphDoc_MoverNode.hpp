#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
struct AnimParamID;
struct CAnimInputDamping;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Mover"
class CAnimGraphDoc_MoverNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Generate Movement"
	// MPropertyGroupName "Generate Movement"
	// MPropertyAttrChangeCallback
	bool m_bApplyMovement; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0049[0x7]; // 0x49
public:
	// MPropertyHideField
	CUtlString m_moveVectorParamName; // 0x50	
	// MPropertyFriendlyName "Movement Velocity Parameter"
	// MPropertyGroupName "Generate Movement"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_moveVectorParam; // 0x58	
	// MPropertyFriendlyName "Orient Movement"
	// MPropertyGroupName "Orient Movement"
	// MPropertyAttrChangeCallback
	bool m_bOrientMovement; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad005d[0x3]; // 0x5d
public:
	// MPropertyHideField
	CUtlString m_moveHeadingParamName; // 0x60	
	// MPropertyFriendlyName "Movement Heading Parameter"
	// MPropertyGroupName "Orient Movement"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_moveHeadingParam; // 0x68	
	// MPropertyFriendlyName "Additive"
	bool m_bAdditive; // 0x6c	
	// MPropertyFriendlyName "Turn to Face"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	bool m_bTurnToFace; // 0x6d	
private:
	[[maybe_unused]] uint8_t __pad006e[0x2]; // 0x6e
public:
	// MPropertyFriendlyName "Face Direction"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_facingTarget; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0074[0x4]; // 0x74
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x78	
	// MPropertyFriendlyName "Facing Parameter"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x80	
	// MPropertyFriendlyName "Turn Limit Only"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	// MPropertyAttrChangeCallback
	bool m_bLimitOnly; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	// MPropertyFriendlyName "Turn to Face Offset"
	// MPropertyAttributeRange "-180 180"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceOffset; // 0x88	
	// MPropertyFriendlyName "Turn to Face Limit"
	// MPropertyAttributeRange "0 180"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceLimit; // 0x8c	
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_damping; // 0x90	
};

