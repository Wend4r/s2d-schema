#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CCitadelBotTestNode : public CServerOnlyPointEntity
{
public:
	EBotTestNodeType m_eNodeType; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CUtlSymbolLarge m_sNextNode; // 0x4e0	
	CUtlSymbolLarge m_sShootTarget; // 0x4e8	
	CHandle< CCitadelBotTestNode > m_hNextNode; // 0x4f0	
	CHandle< CCitadelBotTestNode > m_hShootTarget; // 0x4f4	
	CHandle< CCitadelPlayerPawn > m_hLockingEntity; // 0x4f8	
};

