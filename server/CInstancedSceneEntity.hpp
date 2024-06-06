#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa38
// Has VTable
class CInstancedSceneEntity : public CSceneEntity
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0xa20	
	bool m_bHadOwner; // 0xa24	
private:
	[[maybe_unused]] uint8_t __pad0a25[0x3]; // 0xa25
public:
	float m_flPostSpeakDelay; // 0xa28	
	float m_flPreDelay; // 0xa2c	
	bool m_bIsBackground; // 0xa30	
	bool m_bRemoveOnCompletion; // 0xa31	
private:
	[[maybe_unused]] uint8_t __pad0a32[0x2]; // 0xa32
public:
	CHandle< CBaseEntity > m_hTarget; // 0xa34	
};

