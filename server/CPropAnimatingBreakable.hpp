#pragma once

#include <cstdint>

struct CBreakableStageHelper;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e8
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
class CPropAnimatingBreakable : public CBaseAnimGraph
{
public:
	CBreakableStageHelper m_stages; // 0x958	
	CEntityIOOutput m_OnTakeDamage; // 0x970	
	CEntityIOOutput m_OnFinalBreak; // 0x998	
	CEntityIOOutput m_OnStageAdvanced; // 0x9c0	
	
	// Datamap fields:
	// void InputNextBreakStage; // 0x0
};

