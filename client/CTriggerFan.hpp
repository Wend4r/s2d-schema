#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x9d0
// Has VTable
// 
// MNetworkVarNames "Vector m_vFanOrigin"
// MNetworkVarNames "Vector m_vFanOriginOffset"
// MNetworkVarNames "Vector m_vFanEnd"
// MNetworkVarNames "Vector m_vNoiseDirectionTarget"
// MNetworkVarNames "Vector m_vDirection"
// MNetworkVarNames "bool m_bPushTowardsEntity"
// MNetworkVarNames "Quaternion m_qNoiseDelta"
// MNetworkVarNames "CHandle< CInfoFan> m_hInfoFan"
// MNetworkVarNames "float m_flForce"
// MNetworkVarNames "bool m_bFalloff"
// MNetworkVarNames "CountdownTimer m_RampTimer"
class CTriggerFan : public C_BaseTrigger
{
public:
	// MNetworkEnable
	Vector m_vFanOrigin; // 0x948	
	// MNetworkEnable
	Vector m_vFanOriginOffset; // 0x954	
	// MNetworkEnable
	Vector m_vFanEnd; // 0x960	
	// MNetworkEnable
	Vector m_vNoiseDirectionTarget; // 0x96c	
	// MNetworkEnable
	Vector m_vDirection; // 0x978	
	// MNetworkEnable
	bool m_bPushTowardsEntity; // 0x984	
private:
	[[maybe_unused]] uint8_t __pad0985[0xb]; // 0x985
public:
	// MNetworkEnable
	Quaternion m_qNoiseDelta; // 0x990	
	// MNetworkEnable
	CHandle< CInfoFan > m_hInfoFan; // 0x9a0	
	// MNetworkEnable
	float m_flForce; // 0x9a4	
	// MNetworkEnable
	bool m_bFalloff; // 0x9a8	
private:
	[[maybe_unused]] uint8_t __pad09a9[0x7]; // 0x9a9
public:
	// MNetworkEnable
	// -> m_duration - 0x9b8
	// -> m_timestamp - 0x9bc
	// -> m_timescale - 0x9c0
	// -> m_nWorldGroupId - 0x9c4
	CountdownTimer m_RampTimer; // 0x9b0	
};

