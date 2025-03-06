#pragma once

#include <cstdint>

struct CBreakableStageHelper;
struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb90
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
class CPropAnimatingBreakable : public CBaseAnimGraph
{
public:
	CBreakableStageHelper m_stages; // 0xb00	
	CEntityIOOutput m_OnTakeDamage; // 0xb18	
	CEntityIOOutput m_OnFinalBreak; // 0xb40	
	CEntityIOOutput m_OnStageAdvanced; // 0xb68	
	
	// Datamap fields:
	// void InputNextBreakStage; // 0x0
};

