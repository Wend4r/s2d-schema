#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Follow Attachment"
class CAnimGraphDoc_FollowAttachmentNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x48	
	// MPropertyFriendlyName "Target Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x50	
	// MPropertyFriendlyName "Match Translation"
	bool m_bMatchTranslation; // 0x58	
	// MPropertyFriendlyName "Match Rotation"
	bool m_bMatchRotation; // 0x59	
};

