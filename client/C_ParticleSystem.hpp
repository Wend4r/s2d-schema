#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x12d0
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
	char m_szSnapshotFileName[512]; // 0xd20	
	// MNetworkEnable
	bool m_bActive; // 0xf20	
	// MNetworkEnable
	bool m_bFrozen; // 0xf21	
private:
	[[maybe_unused]] uint8_t __pad0f22[0x2]; // 0xf22
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0xf24	
	// MNetworkEnable
	int32_t m_nStopType; // 0xf28	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0xf2c	
private:
	[[maybe_unused]] uint8_t __pad0f2d[0x3]; // 0xf2d
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0xf30	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xf38	
	// MNetworkEnable
	float m_flPreSimTime; // 0xf3c	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0xf40	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0xf70	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPointEnts[64]; // 0xf74	
	// MNetworkEnable
	bool m_bNoSave; // 0x1074	
	// MNetworkEnable
	bool m_bNoFreeze; // 0x1075	
	// MNetworkEnable
	bool m_bNoRamp; // 0x1076	
	bool m_bStartActive; // 0x1077	
	CUtlSymbolLarge m_iszEffectName; // 0x1078	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0x1080	
	int32_t m_nDataCP; // 0x1280	
	Vector m_vecDataCPValue; // 0x1284	
	int32_t m_nTintCP; // 0x1290	
	Color m_clrTint; // 0x1294	
private:
	[[maybe_unused]] uint8_t __pad1298[0x20]; // 0x1298
public:
	bool m_bOldActive; // 0x12b8	
	bool m_bOldFrozen; // 0x12b9	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputSetControlPoint; // 0x0
	// float InputSetDataControlPointX; // 0x0
	// float InputSetDataControlPointY; // 0x0
	// float InputSetDataControlPointZ; // 0x0
	// void C_ParticleSystemStartParticleSystemThink; // 0x0
	// CUtlString cpoint%d_value[64]; // 0x7fffffff
	// void m_pEffect; // 0x1298
	// void m_iOldEffectIndex; // 0x12c0
};

