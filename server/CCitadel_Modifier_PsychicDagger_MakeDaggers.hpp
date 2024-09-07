#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x398
// Has VTable
class CCitadel_Modifier_PsychicDagger_MakeDaggers : public CCitadelModifier
{
public:
	int32_t m_iCurrentProjectile; // 0xc8	
	int32_t m_nDaggerCount; // 0xcc	
private:
	[[maybe_unused]] uint8_t __pad00d0[0x230]; // 0xd0
public:
	GameTime_t m_flLastDaggerSpawn; // 0x300	
	GameTime_t m_flLastDaggerShoot; // 0x304	
	bool m_bIsSpawning; // 0x308	
	bool m_bInterrupted; // 0x309	
private:
	[[maybe_unused]] uint8_t __pad030a[0x6]; // 0x30a
public:
	CUtlVector< CCitadel_Modifier_PsychicDagger_MakeDaggers::Dagger_t > m_vecDaggers; // 0x310	
};

