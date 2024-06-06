#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "m_hOwnerEntity"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nameStringableIndex"
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
	char m_szSnapshotFileName[512]; // 0xcc8	
	// MNetworkEnable
	bool m_bActive; // 0xec8	
	// MNetworkEnable
	bool m_bFrozen; // 0xec9	
private:
	[[maybe_unused]] uint8_t __pad0eca[0x2]; // 0xeca
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0xecc	
	// MNetworkEnable
	int32_t m_nStopType; // 0xed0	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0xed4	
private:
	[[maybe_unused]] uint8_t __pad0ed5[0x3]; // 0xed5
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0xed8	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xee0	
	// MNetworkEnable
	float m_flPreSimTime; // 0xee4	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0xee8	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0xf18	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPointEnts[64]; // 0xf1c	
	// MNetworkEnable
	bool m_bNoSave; // 0x101c	
	// MNetworkEnable
	bool m_bNoFreeze; // 0x101d	
	// MNetworkEnable
	bool m_bNoRamp; // 0x101e	
	bool m_bStartActive; // 0x101f	
	CUtlSymbolLarge m_iszEffectName; // 0x1020	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0x1028	
	int32_t m_nDataCP; // 0x1228	
	Vector m_vecDataCPValue; // 0x122c	
	int32_t m_nTintCP; // 0x1238	
	Color m_clrTint; // 0x123c	
private:
	[[maybe_unused]] uint8_t __pad1240[0x20]; // 0x1240
public:
	bool m_bOldActive; // 0x1260	
	bool m_bOldFrozen; // 0x1261	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputSetControlPoint; // 0x0
	// void C_ParticleSystemStartParticleSystemThink; // 0x0
	// CUtlString cpoint%d_value[64]; // 0x7fffffff
	// void m_pEffect; // 0x1240
	// void m_iOldEffectIndex; // 0x1268
};

