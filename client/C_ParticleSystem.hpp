#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdc0
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "m_hOwnerEntity"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nameStringableIndex"
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "char m_szSnapshotFileName"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bFrozen"
// MNetworkVarNames "float m_flFreezeTransitionDuration"
// MNetworkVarNames "int m_nStopType"
// MNetworkVarNames "bool m_bAnimateDuringGameplayPause"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flPreSimTime"
// MNetworkVarNames "Vector m_vServerControlPoints"
// MNetworkVarNames "uint8 m_iServerControlPointAssignments"
// MNetworkVarNames "CHandle< CBaseEntity > m_hControlPointEnts"
// MNetworkVarNames "bool m_bNoSave"
// MNetworkVarNames "bool m_bNoFreeze"
// MNetworkVarNames "bool m_bNoRamp"
class C_ParticleSystem : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	char m_szSnapshotFileName[512]; // 0x810	
	// MNetworkEnable
	bool m_bActive; // 0xa10	
	// MNetworkEnable
	bool m_bFrozen; // 0xa11	
private:
	[[maybe_unused]] uint8_t __pad0a12[0x2]; // 0xa12
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0xa14	
	// MNetworkEnable
	int32_t m_nStopType; // 0xa18	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0xa1c	
private:
	[[maybe_unused]] uint8_t __pad0a1d[0x3]; // 0xa1d
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0xa20	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xa28	
	// MNetworkEnable
	float m_flPreSimTime; // 0xa2c	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0xa30	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0xa60	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPointEnts[64]; // 0xa64	
	// MNetworkEnable
	bool m_bNoSave; // 0xb64	
	// MNetworkEnable
	bool m_bNoFreeze; // 0xb65	
	// MNetworkEnable
	bool m_bNoRamp; // 0xb66	
	bool m_bStartActive; // 0xb67	
	CUtlSymbolLarge m_iszEffectName; // 0xb68	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0xb70	
	int32_t m_nDataCP; // 0xd70	
	Vector m_vecDataCPValue; // 0xd74	
	int32_t m_nTintCP; // 0xd80	
	Color m_clrTint; // 0xd84	
private:
	[[maybe_unused]] uint8_t __pad0d88[0x20]; // 0xd88
public:
	bool m_bOldActive; // 0xda8	
	bool m_bOldFrozen; // 0xda9	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputSetControlPoint; // 0x0
	// void C_ParticleSystemStartParticleSystemThink; // 0x0
	// CUtlString cpoint%d_value[64]; // 0x7fffffff
	// void m_pEffect; // 0xd88
	// void m_iOldEffectIndex; // 0xdb0
};

