#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc88
// Has VTable
class CNPC_TrooperNeutral_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphParamOptionalRef< bool > m_bShielded; // 0xbd8	
	CAnimGraphParamOptionalRef< bool > m_bAlert; // 0xbf8	
	CAnimGraphParamOptionalRef< char* > m_pszAttackLeanPosition; // 0xc18	
	CAnimGraphParamOptionalRef< char* > m_pszOrbDrop; // 0xc40	
	CAnimGraphParamOptionalRef< bool > m_bHeavyMelee; // 0xc68	
};

