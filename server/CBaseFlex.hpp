#pragma once

#include <cstdint>

struct GameTime_t;
struct SceneEventId_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb20
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
	CNetworkUtlVectorBase< float32 > m_flexWeight; // 0xa90	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vLookTargetPosition; // 0xaa8	
	// MNetworkEnable
	bool m_blinktoggle; // 0xab4	
private:
	[[maybe_unused]] uint8_t __pad0ab5[0x53]; // 0xab5
public:
	GameTime_t m_flAllowResponsesEndTime; // 0xb08	
	GameTime_t m_flLastFlexAnimationTime; // 0xb0c	
	SceneEventId_t m_nNextSceneEventId; // 0xb10	
	bool m_bUpdateLayerPriorities; // 0xb14	
	
	// Datamap fields:
	// void CBaseFlexProcessSceneEventsThink; // 0x0
};

