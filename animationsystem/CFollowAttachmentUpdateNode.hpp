#pragma once

#include <cstdint>

struct FollowAttachmentSettings_t;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
class CFollowAttachmentUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	// -> m_attachment - 0x70
	// -> m_boneIndex - 0xf0
	// -> m_bMatchTranslation - 0xf4
	// -> m_bMatchRotation - 0xf5
	FollowAttachmentSettings_t m_opFixedData; // 0x70	
};

