#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0xa30
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
class CTriggerFan : public CBaseTrigger
{
public:
	// MNetworkEnable
	Vector m_vFanOrigin; // 0x978	
	// MNetworkEnable
	Vector m_vFanOriginOffset; // 0x984	
	// MNetworkEnable
	Vector m_vFanEnd; // 0x990	
	// MNetworkEnable
	Vector m_vNoiseDirectionTarget; // 0x99c	
	// MNetworkEnable
	Vector m_vDirection; // 0x9a8	
	// MNetworkEnable
	bool m_bPushTowardsEntity; // 0x9b4	
private:
	[[maybe_unused]] uint8_t __pad09b5[0xb]; // 0x9b5
public:
	// MNetworkEnable
	Quaternion m_qNoiseDelta; // 0x9c0	
	// MNetworkEnable
	CHandle< CInfoFan > m_hInfoFan; // 0x9d0	
	// MNetworkEnable
	float m_flForce; // 0x9d4	
	// MNetworkEnable
	bool m_bFalloff; // 0x9d8	
private:
	[[maybe_unused]] uint8_t __pad09d9[0x7]; // 0x9d9
public:
	// MNetworkEnable
	CountdownTimer m_RampTimer; // 0x9e0	
	CUtlSymbolLarge m_iszInfoFan; // 0x9f8	
	float m_flRopeForceScale; // 0xa00	
	float m_flParticleForceScale; // 0xa04	
	float m_flPlayerForce; // 0xa08	
	bool m_bPlayerWindblock; // 0xa0c	
private:
	[[maybe_unused]] uint8_t __pad0a0d[0x3]; // 0xa0d
public:
	float m_flNPCForce; // 0xa10	
	float m_flRampTime; // 0xa14	
	float m_fNoiseDegrees; // 0xa18	
	float m_fNoiseSpeed; // 0xa1c	
	bool m_bPushPlayer; // 0xa20	
	bool m_bRampDown; // 0xa21	
private:
	[[maybe_unused]] uint8_t __pad0a22[0x2]; // 0xa22
public:
	int32_t m_nManagerFanIdx; // 0xa24	
	
	// Datamap fields:
	// void CTriggerFanPushThink; // 0x0
};

