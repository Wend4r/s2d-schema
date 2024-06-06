#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xe0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Procedural Hit Reacts"
class CAnimGraphDoc_HitReactNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Minimum Delay Between Hits"
	float m_flMinDelayBetweenHits; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyHideField
	CUtlString m_triggerParamName; // 0x50	
	// MPropertyHideField
	CUtlString m_hitBoneParamName; // 0x58	
	// MPropertyHideField
	CUtlString m_hitOffsetParamName; // 0x60	
	// MPropertyHideField
	CUtlString m_hitDirectionParamName; // 0x68	
	// MPropertyHideField
	CUtlString m_hitStrengthParamName; // 0x70	
	// MPropertyFriendlyName "Trigger Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	AnimParamID m_triggerParam; // 0x78	
	// MPropertyFriendlyName "Hit Bone Parameter"
	// MPropertyAttributeChoiceName "IntParameter"
	AnimParamID m_hitBoneParam; // 0x7c	
	// MPropertyFriendlyName "Hit Offset Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitOffsetParam; // 0x80	
	// MPropertyFriendlyName "Hit Direction Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitDirectionParam; // 0x84	
	// MPropertyFriendlyName "Hit Strength Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_hitStrengthParam; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	// MPropertyFriendlyName "Bone Weights"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_weightListName; // 0x90	
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_hipBoneName; // 0x98	
	// MPropertyFriendlyName "Hip Translation Scale"
	float m_flHipBoneTranslationScale; // 0xa0	
	// MPropertyFriendlyName "Number of bone effected"
	int32_t m_nEffectedBoneCount; // 0xa4	
	// MPropertyFriendlyName "Max Impact Force"
	float m_flMaxImpactForce; // 0xa8	
	// MPropertyFriendlyName "Min Impact Force"
	float m_flMinImpactForce; // 0xac	
	// MPropertyFriendlyName "Whip Impact Scale"
	float m_flWhipImpactScale; // 0xb0	
	// MPropertyFriendlyName "Counter Rotation Scale"
	float m_flCounterRotationScale; // 0xb4	
	// MPropertyFriendlyName "Distance Fade Scale"
	float m_flDistanceFadeScale; // 0xb8	
	// MPropertyFriendlyName "Propagation Scale"
	float m_flPropagationScale; // 0xbc	
	// MPropertyFriendlyName "Whip Delay Time"
	float m_flWhipDelay; // 0xc0	
	// MPropertyFriendlyName "Spring Strength"
	float m_flSpringStrength; // 0xc4	
	// MPropertyFriendlyName "Whip Spring Strength"
	float m_flWhipSpringStrength; // 0xc8	
	// MPropertyFriendlyName "Hip Dip Spring Strength"
	float m_flHipDipSpringStrength; // 0xcc	
	// MPropertyFriendlyName "Hip Dip Scale"
	float m_flHipDipImpactScale; // 0xd0	
	// MPropertyFriendlyName "Hip Dip Delay Time"
	float m_flHipDipDelay; // 0xd4	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0xd8	
};

