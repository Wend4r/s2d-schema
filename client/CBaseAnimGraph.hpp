#pragma once

#include <cstdint>

struct CBaseAnimGraph;
struct PhysicsRagdollPose_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa70
// Has VTable
// 
// MNetworkIncludeByName "m_bClientSideRagdoll"
// MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
// MNetworkVarNames "Vector m_vecForce"
// MNetworkVarNames "int32 m_nForceBone"
// MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
// MNetworkVarNames "bool m_bRagdollClientSide"
class CBaseAnimGraph : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0810[0x78]; // 0x810
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
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0x928	
private:
	[[maybe_unused]] uint8_t __pad0929[0xf]; // 0x929
public:
	bool m_bHasAnimatedMaterialAttributes; // 0x938	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0x880
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
	// void InputClearTargetIdentifierOverride; // 0x0
	// bool InputDisableAnimEventSounds; // 0x0
};

