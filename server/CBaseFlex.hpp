#pragma once

#include <cstdint>

struct GameTime_t;
struct SceneEventId_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9f0
// Has VTable
// 
// MNetworkVarNames "float32 m_flexWeight"
// MNetworkVarNames "Vector m_vLookTargetPosition"
// MNetworkVarNames "bool m_blinktoggle"
class CBaseFlex : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	CNetworkUtlVectorBase< float32 > m_flexWeight; // 0x960	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vLookTargetPosition; // 0x978	
	// MNetworkEnable
	bool m_blinktoggle; // 0x984	
private:
	[[maybe_unused]] uint8_t __pad0985[0x53]; // 0x985
public:
	GameTime_t m_flAllowResponsesEndTime; // 0x9d8	
	GameTime_t m_flLastFlexAnimationTime; // 0x9dc	
	SceneEventId_t m_nNextSceneEventId; // 0x9e0	
	bool m_bUpdateLayerPriorities; // 0x9e4	
	
	// Datamap fields:
	// void CBaseFlexProcessSceneEventsThink; // 0x0
};

