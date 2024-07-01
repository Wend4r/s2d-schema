#pragma once

#include <cstdint>

struct ragdoll_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaf8
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
// MNetworkVarNames "float32 m_flBlendWeight"
class CRagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0958[0x8]; // 0x958
public:
	ragdoll_t m_ragdoll; // 0x960	
	bool m_bStartDisabled; // 0x998	
private:
	[[maybe_unused]] uint8_t __pad0999[0x7]; // 0x999
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	CNetworkUtlVectorBase< Vector > m_ragPos; // 0x9a0	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	CNetworkUtlVectorBase< QAngle > m_ragAngles; // 0x9b8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRagdollSource; // 0x9d0	
	uint32_t m_lastUpdateTickCount; // 0x9d4	
	bool m_allAsleep; // 0x9d8	
	bool m_bFirstCollisionAfterLaunch; // 0x9d9	
private:
	[[maybe_unused]] uint8_t __pad09da[0x2]; // 0x9da
public:
	CHandle< CBaseEntity > m_hDamageEntity; // 0x9dc	
	CHandle< CBaseEntity > m_hKiller; // 0x9e0	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x9e4	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x9e8	
	GameTime_t m_flFadeOutStartTime; // 0x9ec	
	float m_flFadeTime; // 0x9f0	
	// MNetworkDisable
	Vector m_vecLastOrigin; // 0x9f4	
	GameTime_t m_flAwakeTime; // 0xa00	
	GameTime_t m_flLastOriginChangeTime; // 0xa04	
	CUtlSymbolLarge m_strOriginClassName; // 0xa08	
	CUtlSymbolLarge m_strSourceClassName; // 0xa10	
	bool m_bHasBeenPhysgunned; // 0xa18	
	bool m_bShouldTeleportPhysics; // 0xa19	
private:
	[[maybe_unused]] uint8_t __pad0a1a[0x2]; // 0xa1a
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0xa1c	
	float m_flDefaultFadeScale; // 0xa20	
private:
	[[maybe_unused]] uint8_t __pad0a24[0x4]; // 0xa24
public:
	CUtlVector< Vector > m_ragdollMins; // 0xa28	
	CUtlVector< Vector > m_ragdollMaxs; // 0xa40	
	bool m_bShouldDeleteActivationRecord; // 0xa58	
private:
	[[maybe_unused]] uint8_t __pad0a59[0x5f]; // 0xa59
public:
	bool m_bValidatePoweredRagdollPose; // 0xab8	
	
	// Datamap fields:
	// void m_ragdoll.boneIndex; // 0x978
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
	// void m_ragdoll.list; // 0x960
	// bool m_ragdoll.allowStretch; // 0x990
};

