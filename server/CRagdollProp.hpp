#pragma once

#include <cstdint>

struct ragdoll_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb00
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
// MNetworkVarNames "float32 m_flBlendWeight"
class CRagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0960[0x8]; // 0x960
public:
	ragdoll_t m_ragdoll; // 0x968	
	bool m_bStartDisabled; // 0x9a0	
private:
	[[maybe_unused]] uint8_t __pad09a1[0x7]; // 0x9a1
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	CNetworkUtlVectorBase< Vector > m_ragPos; // 0x9a8	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	CNetworkUtlVectorBase< QAngle > m_ragAngles; // 0x9c0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRagdollSource; // 0x9d8	
	uint32_t m_lastUpdateTickCount; // 0x9dc	
	bool m_allAsleep; // 0x9e0	
	bool m_bFirstCollisionAfterLaunch; // 0x9e1	
private:
	[[maybe_unused]] uint8_t __pad09e2[0x2]; // 0x9e2
public:
	CHandle< CBaseEntity > m_hDamageEntity; // 0x9e4	
	CHandle< CBaseEntity > m_hKiller; // 0x9e8	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x9ec	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x9f0	
	GameTime_t m_flFadeOutStartTime; // 0x9f4	
	float m_flFadeTime; // 0x9f8	
	// MNetworkDisable
	Vector m_vecLastOrigin; // 0x9fc	
	GameTime_t m_flAwakeTime; // 0xa08	
	GameTime_t m_flLastOriginChangeTime; // 0xa0c	
	CUtlSymbolLarge m_strOriginClassName; // 0xa10	
	CUtlSymbolLarge m_strSourceClassName; // 0xa18	
	bool m_bHasBeenPhysgunned; // 0xa20	
	bool m_bShouldTeleportPhysics; // 0xa21	
private:
	[[maybe_unused]] uint8_t __pad0a22[0x2]; // 0xa22
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0xa24	
	float m_flDefaultFadeScale; // 0xa28	
private:
	[[maybe_unused]] uint8_t __pad0a2c[0x4]; // 0xa2c
public:
	CUtlVector< Vector > m_ragdollMins; // 0xa30	
	CUtlVector< Vector > m_ragdollMaxs; // 0xa48	
	bool m_bShouldDeleteActivationRecord; // 0xa60	
private:
	[[maybe_unused]] uint8_t __pad0a61[0x5f]; // 0xa61
public:
	bool m_bValidatePoweredRagdollPose; // 0xac0	
	
	// Datamap fields:
	// void m_ragdoll.boneIndex; // 0x980
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// float InputFadeAndRemove; // 0x0
	// void CRagdollPropSetDebrisThink; // 0x0
	// void CRagdollPropClearFlagsThink; // 0x0
	// void CRagdollPropFadeOutThink; // 0x0
	// void CRagdollPropSettleThink; // 0x0
	// void CRagdollPropAttachedItemsThink; // 0x0
	// void CRagdollPropRagdollTouch; // 0x0
	// void m_ragdoll.list; // 0x968
	// bool m_ragdoll.allowStretch; // 0x998
};

