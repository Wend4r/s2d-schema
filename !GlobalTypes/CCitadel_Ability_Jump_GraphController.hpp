#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Ability_Jump_GraphController : public CCitadelBaseAbilityGraphController
{
public:
	CAnimGraphParamOptionalRef< bool > m_bDashJump; // 0xc8	
	CAnimGraphParamOptionalRef< bool > m_bJump; // 0xe8	
	CAnimGraphParamOptionalRef< char* > m_pszLaunchType; // 0x108	
};

