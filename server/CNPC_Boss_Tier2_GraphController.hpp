#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class CNPC_Boss_Tier2_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphParamRef< char* > m_pszActivity; // 0xbd8	
	CAnimGraphParamRef< char* > m_pszStompAttack; // 0xc00	
	CAnimGraphParamRef< char* > m_pszStaggerDirection; // 0xc28	
	CAnimGraphParamRef< char* > m_pszElectricBeamPosition; // 0xc50	
	CAnimGraphTagRef m_sStaggered; // 0xc78	
	CAnimGraphTagRef m_sStomp; // 0xc90	
private:
	[[maybe_unused]] uint8_t __pad0ca8[0x8]; // 0xca8
public:
	CAnimGraphTagRef m_sApplyStompDamage; // 0xcb0	
};

