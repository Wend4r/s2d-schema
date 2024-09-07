#pragma once

#include <cstdint>

struct CAnimAttachment;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0x90
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FollowAttachmentSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0	
	int32_t m_boneIndex; // 0x80	
	bool m_bMatchTranslation; // 0x84	
	bool m_bMatchRotation; // 0x85	
};

