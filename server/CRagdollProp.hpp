#pragma once

#include <cstdint>

struct ragdoll_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa88
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
// MNetworkVarNames "float32 m_flBlendWeight"
class CRagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad08e8[0x8]; // 0x8e8
public:
	ragdoll_t m_ragdoll; // 0x8f0	
	bool m_bStartDisabled; // 0x928	
private:
	[[maybe_unused]] uint8_t __pad0929[0x7]; // 0x929
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	CNetworkUtlVectorBase< Vector > m_ragPos; // 0x930	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	CNetworkUtlVectorBase< QAngle > m_ragAngles; // 0x948	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRagdollSource; // 0x960	
	uint32_t m_lastUpdateTickCount; // 0x964	
	bool m_allAsleep; // 0x968	
	bool m_bFirstCollisionAfterLaunch; // 0x969	
private:
	[[maybe_unused]] uint8_t __pad096a[0x2]; // 0x96a
public:
	CHandle< CBaseEntity > m_hDamageEntity; // 0x96c	
	CHandle< CBaseEntity > m_hKiller; // 0x970	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x974	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x978	
	GameTime_t m_flFadeOutStartTime; // 0x97c	
	float m_flFadeTime; // 0x980	
	// MNetworkDisable
	Vector m_vecLastOrigin; // 0x984	
	GameTime_t m_flAwakeTime; // 0x990	
	GameTime_t m_flLastOriginChangeTime; // 0x994	
	CUtlSymbolLarge m_strOriginClassName; // 0x998	
	CUtlSymbolLarge m_strSourceClassName; // 0x9a0	
	bool m_bHasBeenPhysgunned; // 0x9a8	
	bool m_bShouldTeleportPhysics; // 0x9a9	
private:
	[[maybe_unused]] uint8_t __pad09aa[0x2]; // 0x9aa
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0x9ac	
	float m_flDefaultFadeScale; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b4[0x4]; // 0x9b4
public:
	CUtlVector< Vector > m_ragdollMins; // 0x9b8	
	CUtlVector< Vector > m_ragdollMaxs; // 0x9d0	
	bool m_bShouldDeleteActivationRecord; // 0x9e8	
private:
	[[maybe_unused]] uint8_t __pad09e9[0x5f]; // 0x9e9
public:
	bool m_bValidatePoweredRagdollPose; // 0xa48	
	
	// Datamap fields:
	// void m_ragdoll.boneIndex; // 0x908
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
	// void m_ragdoll.list; // 0x8f0
	// bool m_ragdoll.allowStretch; // 0x920
};

