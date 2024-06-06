#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc88
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
class CParticleSystem : public CBaseModelEntity
{
public:
	// MNetworkEnable
	char m_szSnapshotFileName[512]; // 0x710	
	// MNetworkEnable
	bool m_bActive; // 0x910	
	// MNetworkEnable
	bool m_bFrozen; // 0x911	
private:
	[[maybe_unused]] uint8_t __pad0912[0x2]; // 0x912
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0x914	
	// MNetworkEnable
	int32_t m_nStopType; // 0x918	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0x91c	
private:
	[[maybe_unused]] uint8_t __pad091d[0x3]; // 0x91d
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x920	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x928	
	// MNetworkEnable
	float m_flPreSimTime; // 0x92c	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0x930	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0x960	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hControlPointEnts[64]; // 0x964	
	// MNetworkEnable
	bool m_bNoSave; // 0xa64	
	// MNetworkEnable
	bool m_bNoFreeze; // 0xa65	
	// MNetworkEnable
	bool m_bNoRamp; // 0xa66	
	bool m_bStartActive; // 0xa67	
	CUtlSymbolLarge m_iszEffectName; // 0xa68	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0xa70	
	int32_t m_nDataCP; // 0xc70	
	Vector m_vecDataCPValue; // 0xc74	
	int32_t m_nTintCP; // 0xc80	
	Color m_clrTint; // 0xc84	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputSetControlPoint; // 0x0
	// void CParticleSystemStartParticleSystemThink; // 0x0
	// CUtlString cpoint%d_value[64]; // 0x7fffffff
};

