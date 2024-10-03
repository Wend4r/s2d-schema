#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa58
// Has VTable
class CInstancedSceneEntity : public CSceneEntity
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0xa40	
	bool m_bHadOwner; // 0xa44	
private:
	[[maybe_unused]] uint8_t __pad0a45[0x3]; // 0xa45
public:
	float m_flPostSpeakDelay; // 0xa48	
	float m_flPreDelay; // 0xa4c	
	bool m_bIsBackground; // 0xa50	
	bool m_bRemoveOnCompletion; // 0xa51	
private:
	[[maybe_unused]] uint8_t __pad0a52[0x2]; // 0xa52
public:
	CHandle< CBaseEntity > m_hTarget; // 0xa54	
};

