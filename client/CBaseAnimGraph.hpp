#pragma once

#include <cstdint>

struct CBaseAnimGraph;
struct PhysicsRagdollPose_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed0
// Has VTable
// 
// MNetworkIncludeByName "m_bClientSideRagdoll"
// MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
// MNetworkVarNames "Vector m_vecForce"
// MNetworkVarNames "int32 m_nForceBone"
// MNetworkVarNames "PhysicsRagdollPose_t* m_pRagdollPose"
// MNetworkVarNames "bool m_bRagdollClientSide"
class CBaseAnimGraph : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x78]; // 0xcc8
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d41[0x1]; // 0xd41
public:
	bool m_bSuppressAnimEventSounds; // 0xd42	
private:
	[[maybe_unused]] uint8_t __pad0d43[0xd]; // 0xd43
public:
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0xd50	
private:
	[[maybe_unused]] uint8_t __pad0d51[0x3]; // 0xd51
public:
	float m_flMaxSlopeDistance; // 0xd54	
	Vector m_vLastSlopeCheckPos; // 0xd58	
	bool m_bAnimationUpdateScheduled; // 0xd64	
private:
	[[maybe_unused]] uint8_t __pad0d65[0x3]; // 0xd65
public:
	// MNetworkEnable
	Vector m_vecForce; // 0xd68	
	// MNetworkEnable
	int32_t m_nForceBone; // 0xd74	
	CBaseAnimGraph* m_pClientsideRagdoll; // 0xd78	
	bool m_bBuiltRagdoll; // 0xd80	
private:
	[[maybe_unused]] uint8_t __pad0d81[0x17]; // 0xd81
public:
	// MNetworkEnable
	PhysicsRagdollPose_t* m_pRagdollPose; // 0xd98	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0xda0	
private:
	[[maybe_unused]] uint8_t __pad0da1[0xf]; // 0xda1
public:
	bool m_bHasAnimatedMaterialAttributes; // 0xdb0	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0xd38
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// bool InputDisableAnimEventSounds; // 0x0
};

