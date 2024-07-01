#pragma once

#include <cstdint>

struct CBreakableStageHelper;
struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb00
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
class CPropAnimatingBreakable : public CBaseAnimGraph
{
public:
	CBreakableStageHelper m_stages; // 0xa70	
	CEntityIOOutput m_OnTakeDamage; // 0xa88	
	CEntityIOOutput m_OnFinalBreak; // 0xab0	
	CEntityIOOutput m_OnStageAdvanced; // 0xad8	
	
	// Datamap fields:
	// void InputNextBreakStage; // 0x0
};

