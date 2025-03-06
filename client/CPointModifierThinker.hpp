#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x530
// Has VTable
class CPointModifierThinker : public C_BaseEntity
{
public:
	CModifierHandleTyped< CCitadelModifier > m_hModifier; // 0x510	
	bool m_bSendToClients; // 0x528	
	
	// Datamap fields:
	// void CPointModifierThinkerOnModifierLost; // 0x0
};

