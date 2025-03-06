#pragma once

#include <cstdint>

struct CBaseAnimGraph;
struct PhysicsRagdollPose_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb00
// Has VTable
// 
// MNetworkIncludeByName "m_bClientSideRagdoll"
// MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
// MNetworkVarNames "Vector m_vecForce"
// MNetworkVarNames "int32 m_nForceBone"
// MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
// MNetworkVarNames "bool m_bRagdollEnabled"
// MNetworkVarNames "bool m_bRagdollClientSide"
// MNetworkVarNames "uint8 m_animGraph2SerializeData"
// MNetworkVarNames "int m_nAnimGraph2SerializeDataSizeBytes"
// MNetworkVarNames "int m_animGraph2ReloadCountSV"
class CBaseAnimGraph : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0808[0x80]; // 0x808
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0x888	
private:
	[[maybe_unused]] uint8_t __pad0889[0x1]; // 0x889
public:
	bool m_bSuppressAnimEventSounds; // 0x88a	
private:
	[[maybe_unused]] uint8_t __pad088b[0xd]; // 0x88b
public:
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x898	
private:
	[[maybe_unused]] uint8_t __pad0899[0x3]; // 0x899
public:
	float m_flMaxSlopeDistance; // 0x89c	
	Vector m_vLastSlopeCheckPos; // 0x8a0	
	bool m_bAnimationUpdateScheduled; // 0x8ac	
private:
	[[maybe_unused]] uint8_t __pad08ad[0x3]; // 0x8ad
public:
	// MNetworkEnable
	Vector m_vecForce; // 0x8b0	
	// MNetworkEnable
	int32_t m_nForceBone; // 0x8bc	
	CBaseAnimGraph* m_pClientsideRagdoll; // 0x8c0	
	bool m_bBuiltRagdoll; // 0x8c8	
private:
	[[maybe_unused]] uint8_t __pad08c9[0x17]; // 0x8c9
public:
	// MNetworkEnable
	PhysicsRagdollPose_t m_RagdollPose; // 0x8e0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollEnabledChanged"
	bool m_bRagdollEnabled; // 0x928	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0x929	
private:
	[[maybe_unused]] uint8_t __pad092a[0xe]; // 0x92a
public:
	bool m_bHasAnimatedMaterialAttributes; // 0x938	
private:
	[[maybe_unused]] uint8_t __pad0939[0x16f]; // 0x939
public:
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	C_NetworkUtlVectorBase< uint8 > m_animGraph2SerializeData; // 0xaa8	
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xac0	
	// MNetworkEnable
	int32_t m_animGraph2ReloadCountSV; // 0xac4	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0x880
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
	// void InputClearTargetIdentifierOverride; // 0x0
	// bool InputDisableAnimEventSounds; // 0x0
};

