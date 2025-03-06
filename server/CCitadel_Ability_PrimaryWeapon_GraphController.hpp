#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1e8
// Has VTable
class CCitadel_Ability_PrimaryWeapon_GraphController : public CCitadelBaseAbilityGraphController
{
public:
	CAnimGraph1ParamOptionalRef< bool > m_bAiming; // 0xc8	
	CAnimGraph1ParamOptionalRef< float32 > m_flReloadSpeed; // 0xe0	
	CAnimGraph1ParamOptionalRef< bool > m_bReloadingSingleRoundStart; // 0xf8	
	CAnimGraph1ParamOptionalRef< bool > m_bReloadingSingleRound; // 0x110	
	CAnimGraph1ParamOptionalRef< bool > m_bReloading; // 0x128	
	CAnimGraph1ParamOptionalRef< bool > m_bShootAlt; // 0x140	
	CAnimGraph1ParamOptionalRef< bool > m_bShoot; // 0x158	
	CAnimGraph2ParamRef< CGlobalSymbol > m_Shoot; // 0x170	
	CAnimGraph2ParamRef< CGlobalSymbol > m_ReloadState; // 0x190	
	CAnimGraph2ParamRef< float32 > m_ReloadFraction; // 0x1b0	
	CAnimGraph2ParamRef< float32 > m_AmmoFraction; // 0x1c8	
	int32_t m_nShootPriority; // 0x1e0	
	int32_t m_nReloadPriority; // 0x1e4	
};

