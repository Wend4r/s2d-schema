#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CCitadelBotTestNode : public CServerOnlyPointEntity
{
public:
	EBotTestNodeType m_eNodeType; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x4]; // 0x4bc
public:
	CUtlSymbolLarge m_sNextNode; // 0x4c0	
	CUtlSymbolLarge m_sShootTarget; // 0x4c8	
	CHandle< CCitadelBotTestNode > m_hNextNode; // 0x4d0	
	CHandle< CCitadelBotTestNode > m_hShootTarget; // 0x4d4	
	CHandle< CCitadelPlayerPawn > m_hLockingEntity; // 0x4d8	
};

