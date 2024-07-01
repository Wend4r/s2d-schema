#pragma once

#include <cstdint>

struct GameTime_t;
struct SceneEventId_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e8
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
	CNetworkUtlVectorBase< float32 > m_flexWeight; // 0x958	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vLookTargetPosition; // 0x970	
	// MNetworkEnable
	bool m_blinktoggle; // 0x97c	
private:
	[[maybe_unused]] uint8_t __pad097d[0x53]; // 0x97d
public:
	GameTime_t m_flAllowResponsesEndTime; // 0x9d0	
	GameTime_t m_flLastFlexAnimationTime; // 0x9d4	
	SceneEventId_t m_nNextSceneEventId; // 0x9d8	
	bool m_bUpdateLayerPriorities; // 0x9dc	
	
	// Datamap fields:
	// void CBaseFlexProcessSceneEventsThink; // 0x0
};

