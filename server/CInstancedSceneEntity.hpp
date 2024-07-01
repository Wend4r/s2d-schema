#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa30
// Has VTable
class CInstancedSceneEntity : public CSceneEntity
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0xa18	
	bool m_bHadOwner; // 0xa1c	
private:
	[[maybe_unused]] uint8_t __pad0a1d[0x3]; // 0xa1d
public:
	float m_flPostSpeakDelay; // 0xa20	
	float m_flPreDelay; // 0xa24	
	bool m_bIsBackground; // 0xa28	
	bool m_bRemoveOnCompletion; // 0xa29	
private:
	[[maybe_unused]] uint8_t __pad0a2a[0x2]; // 0xa2a
public:
	CHandle< CBaseEntity > m_hTarget; // 0xa2c	
};

