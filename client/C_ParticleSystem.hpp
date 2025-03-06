#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb8
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
	char m_szSnapshotFileName[512]; // 0x808	
	// MNetworkEnable
	bool m_bActive; // 0xa08	
	// MNetworkEnable
	bool m_bFrozen; // 0xa09	
private:
	[[maybe_unused]] uint8_t __pad0a0a[0x2]; // 0xa0a
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0xa0c	
	// MNetworkEnable
	int32_t m_nStopType; // 0xa10	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0xa14	
private:
	[[maybe_unused]] uint8_t __pad0a15[0x3]; // 0xa15
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0xa18	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xa20	
	// MNetworkEnable
	float m_flPreSimTime; // 0xa24	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0xa28	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0xa58	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPointEnts[64]; // 0xa5c	
	// MNetworkEnable
	bool m_bNoSave; // 0xb5c	
	// MNetworkEnable
	bool m_bNoFreeze; // 0xb5d	
	// MNetworkEnable
	bool m_bNoRamp; // 0xb5e	
	bool m_bStartActive; // 0xb5f	
	CUtlSymbolLarge m_iszEffectName; // 0xb60	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0xb68	
	int32_t m_nDataCP; // 0xd68	
	Vector m_vecDataCPValue; // 0xd6c	
	int32_t m_nTintCP; // 0xd78	
	Color m_clrTint; // 0xd7c	
private:
	[[maybe_unused]] uint8_t __pad0d80[0x20]; // 0xd80
public:
	bool m_bOldActive; // 0xda0	
	bool m_bOldFrozen; // 0xda1	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// float InputFreeze; // 0x0
	// float InputThaw; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputSetControlPoint; // 0x0
	// float InputSetDataControlPointX; // 0x0
	// float InputSetDataControlPointY; // 0x0
	// float InputSetDataControlPointZ; // 0x0
	// void C_ParticleSystemStartParticleSystemThink; // 0x0
	// CUtlString cpoint%d_value[64]; // 0x7fffffff
	// void m_pEffect; // 0xd80
	// void m_iOldEffectIndex; // 0xda8
};

