#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e0
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
	CUtlSymbolLarge m_iszPreCommands; // 0x8e8	
	CUtlSymbolLarge m_iszPostCommands; // 0x8f0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0x8f8	
	CUtlSymbolLarge m_iszViewTarget; // 0x900	
	CHandle< CBaseEntity > m_hViewTarget; // 0x908	
	CHandle< CBaseEntity > m_hViewTargetAngles; // 0x90c	
	CUtlSymbolLarge m_iszViewPosition; // 0x910	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hViewPosition; // 0x918	
	CHandle< CBaseEntity > m_hViewPositionMover; // 0x91c	
	bool m_bPreventMovement; // 0x920	
	bool m_bUnderCrosshair; // 0x921	
	bool m_bUnstoppable; // 0x922	
private:
	[[maybe_unused]] uint8_t __pad0923[0x1]; // 0x923
public:
	GameTime_t m_flFinishedTime; // 0x924	
	Vector m_vecFinishOrigin; // 0x928	
	QAngle m_vecOriginalAngles; // 0x934	
	QAngle m_vecFinishAngles; // 0x940	
	bool m_bPreventChangesWhileMoving; // 0x94c	
	bool m_bDisabled; // 0x94d	
private:
	[[maybe_unused]] uint8_t __pad094e[0x2]; // 0x94e
public:
	Vector m_vecTeleportOrigin; // 0x950	
	GameTime_t m_flAbortedPlaybackAt; // 0x95c	
	CEntityIOOutput m_pOnCommentaryStarted; // 0x960	
	CEntityIOOutput m_pOnCommentaryStopped; // 0x988	
	// MNetworkEnable
	bool m_bActive; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b1[0x3]; // 0x9b1
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x9b4	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0x9b8	
private:
	[[maybe_unused]] uint8_t __pad09bc[0x4]; // 0x9bc
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0x9c0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0x9c8	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0x9d0	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0x9d4	
	// MNetworkEnable
	bool m_bListenedTo; // 0x9d8	
	
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

