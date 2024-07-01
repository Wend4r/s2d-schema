#pragma once

#include <cstdint>

struct CBaseEntity;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe0
// Has Trivial Destructor
struct CitadelAbilityProjectileHitInfo_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xc8]; // 0x0
public:
	CBaseEntity* m_pOther; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00d0[0xc]; // 0xd0
public:
	bool m_bIsTriggerTouch; // 0xdc	
};

