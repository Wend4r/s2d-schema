#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1590
// Has VTable
class C_CSGO_PreviewModel : public C_BaseFlex
{
public:
	CUtlString m_animgraph; // 0x1068	
	CGlobalSymbol m_animgraphCharacterModeString; // 0x1070	
	CUtlString m_defaultAnim; // 0x1078	
	AnimLoopMode_t m_nDefaultAnimLoopMode; // 0x1080	
	float m_flInitialModelScale; // 0x1084	
	CUtlString m_sInitialWeaponState; // 0x1088	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetItem; // 0x0
};

