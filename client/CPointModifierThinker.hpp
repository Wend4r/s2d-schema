#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class CPointModifierThinker : public C_BaseEntity
{
public:
	CModifierHandleTyped< CCitadelModifier > m_hModifier; // 0x538	
	bool m_bSendToClients; // 0x550	
	
	// Datamap fields:
	// void CPointModifierThinkerOnModifierLost; // 0x0
};

