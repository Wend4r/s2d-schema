#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Aim Camera"
class CAnimGraphDoc_AimCameraNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Spine IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChain; // 0x48	
	// MPropertyFriendlyName "Camera Joint"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_cameraJointName; // 0x50	
	// MPropertyFriendlyName "Pelvis Joint"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_pelvisJointName; // 0x58	
	// MPropertyFriendlyName "Clavicle Left Joint"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_clavicleLeftJointName; // 0x60	
	// MPropertyFriendlyName "Clavicle Right Joint"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_clavicleRightJointName; // 0x68	
	// MPropertyFriendlyName "Animgraph Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_parameterNamePosition; // 0x70	
	// MPropertyFriendlyName "Orientation Parameter"
	// MPropertyAttributeChoiceName "QuaternionParameter"
	AnimParamID m_parameterNameOrientation; // 0x74	
	// MPropertyFriendlyName "Pelvis Offset Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_parameterNamePelvisOffset; // 0x78	
	// MPropertyFriendlyName "Spine Rotation Weight Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_parameterNameSpineRotationWeight; // 0x7c	
	// MPropertyFriendlyName "Use IK Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	AnimParamID m_parameterUseIK; // 0x80	
	// MPropertyFriendlyName "Clearance Distance"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_parameterCameraClearanceDistance; // 0x84	
	// MPropertyFriendlyName "Weapon De-Penetration Distance"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_parameterWeaponDepenetrationDistance; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	// MPropertyFriendlyName "Depenetration Joint"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_depenetrationJointName; // 0x90	
	// MPropertyFriendlyName "Prop Joints"
	// MPropertyDescription "These joints will maintain their offset relative to the camera joint."
	CUtlVector< CAnimGraphDoc_AimCameraNode_PropJoint > m_propJoints; // 0x98	
};

