#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc90
// Has VTable
class CNPC_Boss_Tier1_GraphController : public CNPC_Trooper_GraphController
{
public:
	CAnimGraphParamRef< char* > m_pszActivity; // 0xc20	
	CAnimGraphParamRef< char* > m_pszLaneSide; // 0xc48	
	CAnimGraphParamRef< bool > m_bShieldMode; // 0xc70	
};

