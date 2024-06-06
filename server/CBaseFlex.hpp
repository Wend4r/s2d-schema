#pragma once

#include <cstdint>

struct GameTime_t;
struct SceneEventId_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x978
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
	CNetworkUtlVectorBase< float32 > m_flexWeight; // 0x8e8	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vLookTargetPosition; // 0x900	
	// MNetworkEnable
	bool m_blinktoggle; // 0x90c	
private:
	[[maybe_unused]] uint8_t __pad090d[0x53]; // 0x90d
public:
	GameTime_t m_flAllowResponsesEndTime; // 0x960	
	GameTime_t m_flLastFlexAnimationTime; // 0x964	
	SceneEventId_t m_nNextSceneEventId; // 0x968	
	bool m_bUpdateLayerPriorities; // 0x96c	
	
	// Datamap fields:
	// void CBaseFlexProcessSceneEventsThink; // 0x0
};

