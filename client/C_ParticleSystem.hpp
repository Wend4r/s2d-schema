#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x12d8
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
	char m_szSnapshotFileName[512]; // 0xd28	
	// MNetworkEnable
	bool m_bActive; // 0xf28	
	// MNetworkEnable
	bool m_bFrozen; // 0xf29	
private:
	[[maybe_unused]] uint8_t __pad0f2a[0x2]; // 0xf2a
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0xf2c	
	// MNetworkEnable
	int32_t m_nStopType; // 0xf30	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0xf34	
private:
	[[maybe_unused]] uint8_t __pad0f35[0x3]; // 0xf35
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0xf38	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xf40	
	// MNetworkEnable
	float m_flPreSimTime; // 0xf44	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0xf48	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0xf78	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPointEnts[64]; // 0xf7c	
	// MNetworkEnable
	bool m_bNoSave; // 0x107c	
	// MNetworkEnable
	bool m_bNoFreeze; // 0x107d	
	// MNetworkEnable
	bool m_bNoRamp; // 0x107e	
	bool m_bStartActive; // 0x107f	
	CUtlSymbolLarge m_iszEffectName; // 0x1080	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0x1088	
	int32_t m_nDataCP; // 0x1288	
	Vector m_vecDataCPValue; // 0x128c	
	int32_t m_nTintCP; // 0x1298	
	Color m_clrTint; // 0x129c	
private:
	[[maybe_unused]] uint8_t __pad12a0[0x20]; // 0x12a0
public:
	bool m_bOldActive; // 0x12c0	
	bool m_bOldFrozen; // 0x12c1	
	
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
	// void m_pEffect; // 0x12a0
	// void m_iOldEffectIndex; // 0x12c8
};

