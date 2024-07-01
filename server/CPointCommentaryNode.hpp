#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa50
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
	CUtlSymbolLarge m_iszPreCommands; // 0x958	
	CUtlSymbolLarge m_iszPostCommands; // 0x960	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0x968	
	CUtlSymbolLarge m_iszViewTarget; // 0x970	
	CHandle< CBaseEntity > m_hViewTarget; // 0x978	
	CHandle< CBaseEntity > m_hViewTargetAngles; // 0x97c	
	CUtlSymbolLarge m_iszViewPosition; // 0x980	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hViewPosition; // 0x988	
	CHandle< CBaseEntity > m_hViewPositionMover; // 0x98c	
	bool m_bPreventMovement; // 0x990	
	bool m_bUnderCrosshair; // 0x991	
	bool m_bUnstoppable; // 0x992	
private:
	[[maybe_unused]] uint8_t __pad0993[0x1]; // 0x993
public:
	GameTime_t m_flFinishedTime; // 0x994	
	Vector m_vecFinishOrigin; // 0x998	
	QAngle m_vecOriginalAngles; // 0x9a4	
	QAngle m_vecFinishAngles; // 0x9b0	
	bool m_bPreventChangesWhileMoving; // 0x9bc	
	bool m_bDisabled; // 0x9bd	
private:
	[[maybe_unused]] uint8_t __pad09be[0x2]; // 0x9be
public:
	Vector m_vecTeleportOrigin; // 0x9c0	
	GameTime_t m_flAbortedPlaybackAt; // 0x9cc	
	CEntityIOOutput m_pOnCommentaryStarted; // 0x9d0	
	CEntityIOOutput m_pOnCommentaryStopped; // 0x9f8	
	// MNetworkEnable
	bool m_bActive; // 0xa20	
private:
	[[maybe_unused]] uint8_t __pad0a21[0x3]; // 0xa21
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xa24	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xa28	
private:
	[[maybe_unused]] uint8_t __pad0a2c[0x4]; // 0xa2c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xa30	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xa38	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xa40	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xa44	
	// MNetworkEnable
	bool m_bListenedTo; // 0xa48	
	
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

