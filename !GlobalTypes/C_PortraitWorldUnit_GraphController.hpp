#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x158
// Has VTable
class C_PortraitWorldUnit_GraphController : public CBaseAnimGraphAnimGraphController
{
public:
	CAnimGraphParamOptionalRef< char* > m_pszHeroUI; // 0xc8	
	CAnimGraphParamOptionalRef< char* > m_pszShopUI; // 0xf0	
	CAnimGraphParamOptionalRef< float32 > m_flMenuLookAtWeight; // 0x118	
	CAnimGraphParamOptionalRef< Vector > m_vecLookAtPosMS; // 0x138	
};

