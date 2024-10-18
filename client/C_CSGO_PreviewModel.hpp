#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1648
// Has VTable
class C_CSGO_PreviewModel : public C_BaseFlex
{
public:
	CUtlString m_animgraph; // 0x1120	
	CGlobalSymbol m_animgraphCharacterModeString; // 0x1128	
	CUtlString m_defaultAnim; // 0x1130	
	AnimLoopMode_t m_nDefaultAnimLoopMode; // 0x1138	
	float m_flInitialModelScale; // 0x113c	
	CUtlString m_sInitialWeaponState; // 0x1140	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetItem; // 0x0
};

