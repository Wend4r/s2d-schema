#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa50
// Has VTable
class CInstancedSceneEntity : public CSceneEntity
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0xa38	
	bool m_bHadOwner; // 0xa3c	
private:
	[[maybe_unused]] uint8_t __pad0a3d[0x3]; // 0xa3d
public:
	float m_flPostSpeakDelay; // 0xa40	
	float m_flPreDelay; // 0xa44	
	bool m_bIsBackground; // 0xa48	
	bool m_bRemoveOnCompletion; // 0xa49	
private:
	[[maybe_unused]] uint8_t __pad0a4a[0x2]; // 0xa4a
public:
	CHandle< CBaseEntity > m_hTarget; // 0xa4c	
};

