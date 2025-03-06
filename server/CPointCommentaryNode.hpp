#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb88
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
	CUtlSymbolLarge m_iszPreCommands; // 0xa90	
	CUtlSymbolLarge m_iszPostCommands; // 0xa98	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0xaa0	
	CUtlSymbolLarge m_iszViewTarget; // 0xaa8	
	CHandle< CBaseEntity > m_hViewTarget; // 0xab0	
	CHandle< CBaseEntity > m_hViewTargetAngles; // 0xab4	
	CUtlSymbolLarge m_iszViewPosition; // 0xab8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hViewPosition; // 0xac0	
	CHandle< CBaseEntity > m_hViewPositionMover; // 0xac4	
	bool m_bPreventMovement; // 0xac8	
	bool m_bUnderCrosshair; // 0xac9	
	bool m_bUnstoppable; // 0xaca	
private:
	[[maybe_unused]] uint8_t __pad0acb[0x1]; // 0xacb
public:
	GameTime_t m_flFinishedTime; // 0xacc	
	Vector m_vecFinishOrigin; // 0xad0	
	QAngle m_vecOriginalAngles; // 0xadc	
	QAngle m_vecFinishAngles; // 0xae8	
	bool m_bPreventChangesWhileMoving; // 0xaf4	
	bool m_bDisabled; // 0xaf5	
private:
	[[maybe_unused]] uint8_t __pad0af6[0x2]; // 0xaf6
public:
	Vector m_vecTeleportOrigin; // 0xaf8	
	GameTime_t m_flAbortedPlaybackAt; // 0xb04	
	CEntityIOOutput m_pOnCommentaryStarted; // 0xb08	
	CEntityIOOutput m_pOnCommentaryStopped; // 0xb30	
	// MNetworkEnable
	bool m_bActive; // 0xb58	
private:
	[[maybe_unused]] uint8_t __pad0b59[0x3]; // 0xb59
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xb5c	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xb60	
private:
	[[maybe_unused]] uint8_t __pad0b64[0x4]; // 0xb64
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xb68	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xb70	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xb78	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xb7c	
	// MNetworkEnable
	bool m_bListenedTo; // 0xb80	
	
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

