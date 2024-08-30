#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CPointModifierThinker : public CBaseEntity
{
public:
	CModifierHandleTyped< CCitadelModifier > m_hModifier; // 0x4d8	
	bool m_bSendToClients; // 0x4f0	
	
	// Datamap fields:
	// void CPointModifierThinkerOnModifierLost; // 0x0
};

