#pragma once

#include <cstdint>

struct CBreakableStageHelper;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa08
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
class CPropAnimatingBreakable : public CBaseAnimGraph
{
public:
	CBreakableStageHelper m_stages; // 0x978	
	CEntityIOOutput m_OnTakeDamage; // 0x990	
	CEntityIOOutput m_OnFinalBreak; // 0x9b8	
	CEntityIOOutput m_OnStageAdvanced; // 0x9e0	
	
	// Datamap fields:
	// void InputNextBreakStage; // 0x0
};

