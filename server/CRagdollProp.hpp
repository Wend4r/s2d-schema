#pragma once

#include <cstdint>

struct ragdoll_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
// MNetworkVarNames "float32 m_flBlendWeight"
class CRagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a90[0x8]; // 0xa90
public:
	ragdoll_t m_ragdoll; // 0xa98	
	bool m_bStartDisabled; // 0xae8	
private:
	[[maybe_unused]] uint8_t __pad0ae9[0x7]; // 0xae9
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	CNetworkUtlVectorBase< Vector > m_ragPos; // 0xaf0	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	CNetworkUtlVectorBase< QAngle > m_ragAngles; // 0xb08	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRagdollSource; // 0xb20	
	uint32_t m_lastUpdateTickCount; // 0xb24	
	bool m_allAsleep; // 0xb28	
	bool m_bFirstCollisionAfterLaunch; // 0xb29	
private:
	[[maybe_unused]] uint8_t __pad0b2a[0x2]; // 0xb2a
public:
	CHandle< CBaseEntity > m_hDamageEntity; // 0xb2c	
	CHandle< CBaseEntity > m_hKiller; // 0xb30	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xb34	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xb38	
	GameTime_t m_flFadeOutStartTime; // 0xb3c	
	float m_flFadeTime; // 0xb40	
	Vector m_vecLastOrigin; // 0xb44	
	GameTime_t m_flAwakeTime; // 0xb50	
	GameTime_t m_flLastOriginChangeTime; // 0xb54	
	CUtlSymbolLarge m_strOriginClassName; // 0xb58	
	CUtlSymbolLarge m_strSourceClassName; // 0xb60	
	bool m_bHasBeenPhysgunned; // 0xb68	
	bool m_bShouldTeleportPhysics; // 0xb69	
	bool m_bAllowStretch; // 0xb6a	
private:
	[[maybe_unused]] uint8_t __pad0b6b[0x1]; // 0xb6b
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0xb6c	
	float m_flDefaultFadeScale; // 0xb70	
private:
	[[maybe_unused]] uint8_t __pad0b74[0x4]; // 0xb74
public:
	CUtlVector< Vector > m_ragdollMins; // 0xb78	
	CUtlVector< Vector > m_ragdollMaxs; // 0xb90	
	bool m_bShouldDeleteActivationRecord; // 0xba8	
private:
	[[maybe_unused]] uint8_t __pad0ba9[0x5f]; // 0xba9
public:
	bool m_bValidatePoweredRagdollPose; // 0xc08	
	
	// Datamap fields:
	// void m_ragdoll.boneIndex; // 0xac8
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
	// void m_ragdoll.list; // 0xa98
	// void m_ragdoll.hierarchyJoints; // 0xab0
	// bool m_ragdoll.allowStretch; // 0xae0
};

