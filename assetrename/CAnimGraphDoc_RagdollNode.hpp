#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Ragdoll"
class CAnimGraphDoc_RagdollNode : public CAnimGraphDoc_Node
{
public:
	CUtlString m_weightListName; // 0x40	
	RagdollPoseControl m_poseControlMethod; // 0x48	
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x4c	
};

