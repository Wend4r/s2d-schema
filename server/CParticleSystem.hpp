#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd30
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
class CParticleSystem : public CBaseModelEntity
{
public:
	// MNetworkEnable
	char m_szSnapshotFileName[512]; // 0x7b8	
	// MNetworkEnable
	bool m_bActive; // 0x9b8	
	// MNetworkEnable
	bool m_bFrozen; // 0x9b9	
private:
	[[maybe_unused]] uint8_t __pad09ba[0x2]; // 0x9ba
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0x9bc	
	// MNetworkEnable
	int32_t m_nStopType; // 0x9c0	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0x9c4	
private:
	[[maybe_unused]] uint8_t __pad09c5[0x3]; // 0x9c5
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x9c8	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x9d0	
	// MNetworkEnable
	float m_flPreSimTime; // 0x9d4	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0x9d8	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0xa08	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hControlPointEnts[64]; // 0xa0c	
	// MNetworkEnable
	bool m_bNoSave; // 0xb0c	
	// MNetworkEnable
	bool m_bNoFreeze; // 0xb0d	
	// MNetworkEnable
	bool m_bNoRamp; // 0xb0e	
	bool m_bStartActive; // 0xb0f	
	CUtlSymbolLarge m_iszEffectName; // 0xb10	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0xb18	
	int32_t m_nDataCP; // 0xd18	
	Vector m_vecDataCPValue; // 0xd1c	
	int32_t m_nTintCP; // 0xd28	
	Color m_clrTint; // 0xd2c	
	
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
	// void CParticleSystemStartParticleSystemThink; // 0x0
	// CUtlString cpoint%d_value[64]; // 0x7fffffff
};

