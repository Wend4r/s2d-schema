#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaa0
// Has VTable
// 
// MNetworkVarNames "string_t m_iszCommentaryFile"
// MNetworkVarNames "CHandle< CBaseEntity> m_hViewPosition"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flStartTimeInCommentary"
// MNetworkVarNames "string_t m_iszTitle"
// MNetworkVarNames "string_t m_iszSpeakers"
// MNetworkVarNames "int m_iNodeNumber"
// MNetworkVarNames "int m_iNodeNumberMax"
// MNetworkVarNames "bool m_bListenedTo"
class CPointCommentaryNode : public CBaseAnimGraph
{
public:
	CUtlSymbolLarge m_iszPreCommands; // 0x9a8	
	CUtlSymbolLarge m_iszPostCommands; // 0x9b0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0x9b8	
	CUtlSymbolLarge m_iszViewTarget; // 0x9c0	
	CHandle< CBaseEntity > m_hViewTarget; // 0x9c8	
	CHandle< CBaseEntity > m_hViewTargetAngles; // 0x9cc	
	CUtlSymbolLarge m_iszViewPosition; // 0x9d0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hViewPosition; // 0x9d8	
	CHandle< CBaseEntity > m_hViewPositionMover; // 0x9dc	
	bool m_bPreventMovement; // 0x9e0	
	bool m_bUnderCrosshair; // 0x9e1	
	bool m_bUnstoppable; // 0x9e2	
private:
	[[maybe_unused]] uint8_t __pad09e3[0x1]; // 0x9e3
public:
	GameTime_t m_flFinishedTime; // 0x9e4	
	Vector m_vecFinishOrigin; // 0x9e8	
	QAngle m_vecOriginalAngles; // 0x9f4	
	QAngle m_vecFinishAngles; // 0xa00	
	bool m_bPreventChangesWhileMoving; // 0xa0c	
	bool m_bDisabled; // 0xa0d	
private:
	[[maybe_unused]] uint8_t __pad0a0e[0x2]; // 0xa0e
public:
	Vector m_vecTeleportOrigin; // 0xa10	
	GameTime_t m_flAbortedPlaybackAt; // 0xa1c	
	CEntityIOOutput m_pOnCommentaryStarted; // 0xa20	
	CEntityIOOutput m_pOnCommentaryStopped; // 0xa48	
	// MNetworkEnable
	bool m_bActive; // 0xa70	
private:
	[[maybe_unused]] uint8_t __pad0a71[0x3]; // 0xa71
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xa74	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xa78	
private:
	[[maybe_unused]] uint8_t __pad0a7c[0x4]; // 0xa7c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xa80	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xa88	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xa90	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xa94	
	// MNetworkEnable
	bool m_bListenedTo; // 0xa98	
	
	// Datamap fields:
	// void InputStartCommentary; // 0x0
	// void InputStartUnstoppableCommentary; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void CPointCommentaryNodeSpinThink; // 0x0
	// void CPointCommentaryNodeUpdateViewThink; // 0x0
	// void CPointCommentaryNodeUpdateViewPostThink; // 0x0
	// void CPointCommentaryNodeAcculumatePlayTimeThink; // 0x0
};

