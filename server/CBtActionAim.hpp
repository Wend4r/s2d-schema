#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CBtActionAim : public CBtNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x10]; // 0x58
public:
	CUtlString m_szSensorInputKey; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0070[0x10]; // 0x70
public:
	CUtlString m_szAimReadyKey; // 0x80	
	float m_flZoomCooldownTimestamp; // 0x88	
	bool m_bDoneAiming; // 0x8c	
private:
	[[maybe_unused]] uint8_t __pad008d[0x3]; // 0x8d
public:
	float m_flLerpStartTime; // 0x90	
	float m_flNextLookTargetLerpTime; // 0x94	
	float m_flPenaltyReductionRatio; // 0x98	
	QAngle m_NextLookTarget; // 0x9c	
	CountdownTimer m_AimTimer; // 0xa8	
	CountdownTimer m_SniperHoldTimer; // 0xc0	
	CountdownTimer m_FocusIntervalTimer; // 0xd8	
	bool m_bAcquired; // 0xf0	
};

