#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x358
// Has VTable
class CCitadel_Modifier_FissureWall : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x230]; // 0xc8
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecFissureWallEntities; // 0x2f8	
	CUtlVector< CHandle< CBaseEntity > > m_vecFisureEntitiesHit; // 0x310	
	int32_t m_nSegment; // 0x328	
	Vector m_vPosition; // 0x32c	
	Vector m_vDirection; // 0x338	
	Vector m_vLeft; // 0x344	
	float m_Length; // 0x350	
};

