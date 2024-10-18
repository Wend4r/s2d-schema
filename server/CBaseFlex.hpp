#pragma once

#include <cstdint>

struct GameTime_t;
struct SceneEventId_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa38
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
	CNetworkUtlVectorBase< float32 > m_flexWeight; // 0x9a8	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vLookTargetPosition; // 0x9c0	
	// MNetworkEnable
	bool m_blinktoggle; // 0x9cc	
private:
	[[maybe_unused]] uint8_t __pad09cd[0x53]; // 0x9cd
public:
	GameTime_t m_flAllowResponsesEndTime; // 0xa20	
	GameTime_t m_flLastFlexAnimationTime; // 0xa24	
	SceneEventId_t m_nNextSceneEventId; // 0xa28	
	bool m_bUpdateLayerPriorities; // 0xa2c	
	
	// Datamap fields:
	// void CBaseFlexProcessSceneEventsThink; // 0x0
};

