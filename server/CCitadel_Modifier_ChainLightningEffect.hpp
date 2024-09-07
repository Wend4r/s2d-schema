#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x228
// Has VTable
class CCitadel_Modifier_ChainLightningEffect : public CCitadelModifier
{
public:
	int32_t m_nChainCount; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
public:
	CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // 0xd0	
	CUtlVector< CHandle< CBaseEntity > > m_hUnhitEnts; // 0xe8	
	Vector m_vLastSource; // 0x100	
};

