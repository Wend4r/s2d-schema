#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa58
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
	CUtlSymbolLarge m_iszPreCommands; // 0x960	
	CUtlSymbolLarge m_iszPostCommands; // 0x968	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0x970	
	CUtlSymbolLarge m_iszViewTarget; // 0x978	
	CHandle< CBaseEntity > m_hViewTarget; // 0x980	
	CHandle< CBaseEntity > m_hViewTargetAngles; // 0x984	
	CUtlSymbolLarge m_iszViewPosition; // 0x988	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hViewPosition; // 0x990	
	CHandle< CBaseEntity > m_hViewPositionMover; // 0x994	
	bool m_bPreventMovement; // 0x998	
	bool m_bUnderCrosshair; // 0x999	
	bool m_bUnstoppable; // 0x99a	
private:
	[[maybe_unused]] uint8_t __pad099b[0x1]; // 0x99b
public:
	GameTime_t m_flFinishedTime; // 0x99c	
	Vector m_vecFinishOrigin; // 0x9a0	
	QAngle m_vecOriginalAngles; // 0x9ac	
	QAngle m_vecFinishAngles; // 0x9b8	
	bool m_bPreventChangesWhileMoving; // 0x9c4	
	bool m_bDisabled; // 0x9c5	
private:
	[[maybe_unused]] uint8_t __pad09c6[0x2]; // 0x9c6
public:
	Vector m_vecTeleportOrigin; // 0x9c8	
	GameTime_t m_flAbortedPlaybackAt; // 0x9d4	
	CEntityIOOutput m_pOnCommentaryStarted; // 0x9d8	
	CEntityIOOutput m_pOnCommentaryStopped; // 0xa00	
	// MNetworkEnable
	bool m_bActive; // 0xa28	
private:
	[[maybe_unused]] uint8_t __pad0a29[0x3]; // 0xa29
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xa2c	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xa30	
private:
	[[maybe_unused]] uint8_t __pad0a34[0x4]; // 0xa34
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xa38	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xa40	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xa48	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xa4c	
	// MNetworkEnable
	bool m_bListenedTo; // 0xa50	
	
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

