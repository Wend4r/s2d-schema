#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1640
// Has VTable
class C_CSGO_PreviewModel : public C_BaseFlex
{
public:
	CUtlString m_animgraph; // 0x1118	
	CGlobalSymbol m_animgraphCharacterModeString; // 0x1120	
	CUtlString m_defaultAnim; // 0x1128	
	AnimLoopMode_t m_nDefaultAnimLoopMode; // 0x1130	
	float m_flInitialModelScale; // 0x1134	
	CUtlString m_sInitialWeaponState; // 0x1138	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetItem; // 0x0
};

