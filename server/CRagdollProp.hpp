#pragma once

#include <cstdint>

struct ragdoll_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb48
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
// MNetworkVarNames "float32 m_flBlendWeight"
class CRagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad09a8[0x8]; // 0x9a8
public:
	ragdoll_t m_ragdoll; // 0x9b0	
	bool m_bStartDisabled; // 0x9e8	
private:
	[[maybe_unused]] uint8_t __pad09e9[0x7]; // 0x9e9
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	CNetworkUtlVectorBase< Vector > m_ragPos; // 0x9f0	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	CNetworkUtlVectorBase< QAngle > m_ragAngles; // 0xa08	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRagdollSource; // 0xa20	
	uint32_t m_lastUpdateTickCount; // 0xa24	
	bool m_allAsleep; // 0xa28	
	bool m_bFirstCollisionAfterLaunch; // 0xa29	
private:
	[[maybe_unused]] uint8_t __pad0a2a[0x2]; // 0xa2a
public:
	CHandle< CBaseEntity > m_hDamageEntity; // 0xa2c	
	CHandle< CBaseEntity > m_hKiller; // 0xa30	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xa34	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xa38	
	GameTime_t m_flFadeOutStartTime; // 0xa3c	
	float m_flFadeTime; // 0xa40	
	// MNetworkDisable
	Vector m_vecLastOrigin; // 0xa44	
	GameTime_t m_flAwakeTime; // 0xa50	
	GameTime_t m_flLastOriginChangeTime; // 0xa54	
	CUtlSymbolLarge m_strOriginClassName; // 0xa58	
	CUtlSymbolLarge m_strSourceClassName; // 0xa60	
	bool m_bHasBeenPhysgunned; // 0xa68	
	bool m_bShouldTeleportPhysics; // 0xa69	
private:
	[[maybe_unused]] uint8_t __pad0a6a[0x2]; // 0xa6a
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0xa6c	
	float m_flDefaultFadeScale; // 0xa70	
private:
	[[maybe_unused]] uint8_t __pad0a74[0x4]; // 0xa74
public:
	CUtlVector< Vector > m_ragdollMins; // 0xa78	
	CUtlVector< Vector > m_ragdollMaxs; // 0xa90	
	bool m_bShouldDeleteActivationRecord; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aa9[0x5f]; // 0xaa9
public:
	bool m_bValidatePoweredRagdollPose; // 0xb08	
	
	// Datamap fields:
	// void m_ragdoll.boneIndex; // 0x9c8
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
	// void m_ragdoll.list; // 0x9b0
	// bool m_ragdoll.allowStretch; // 0x9e0
};

