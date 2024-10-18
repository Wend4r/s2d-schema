#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e8
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nMinCPULevel"
// MNetworkIncludeByName "m_nMaxCPULevel"
// MNetworkIncludeByName "m_nMinGPULevel"
// MNetworkIncludeByName "m_nMaxGPULevel"
// MNetworkVarNames "uint16 m_RopeFlags"
// MNetworkVarNames "int16 m_Slack"
// MNetworkVarNames "float32 m_Width"
// MNetworkVarNames "float32 m_TextureScale"
// MNetworkVarNames "uint8 m_nSegments"
// MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
// MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
// MNetworkVarNames "uint8 m_Subdiv"
// MNetworkVarNames "uint8 m_nChangeCount"
// MNetworkVarNames "int16 m_RopeLength"
// MNetworkVarNames "uint8 m_fLockedPoints"
// MNetworkVarNames "float32 m_flScrollSpeed"
// MNetworkVarNames "CHandle< CBaseEntity> m_hStartPoint"
// MNetworkVarNames "CHandle< CBaseEntity> m_hEndPoint"
// MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
// MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
class CRopeKeyframe : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0790[0x8]; // 0x790
public:
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0x798	
private:
	[[maybe_unused]] uint8_t __pad079a[0x6]; // 0x79a
public:
	CUtlSymbolLarge m_iNextLinkName; // 0x7a0	
	// MNetworkEnable
	int16_t m_Slack; // 0x7a8	
private:
	[[maybe_unused]] uint8_t __pad07aa[0x2]; // 0x7aa
public:
	// MNetworkEnable
	float m_Width; // 0x7ac	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0x7b0	
	// MNetworkEnable
	uint8_t m_nSegments; // 0x7b4	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0x7b5	
private:
	[[maybe_unused]] uint8_t __pad07b6[0x2]; // 0x7b6
public:
	CUtlSymbolLarge m_strRopeMaterialModel; // 0x7b8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x7c0	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0x7c8	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0x7c9	
	// MNetworkEnable
	int16_t m_RopeLength; // 0x7ca	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0x7cc	
	bool m_bCreatedFromMapFile; // 0x7cd	
private:
	[[maybe_unused]] uint8_t __pad07ce[0x2]; // 0x7ce
public:
	// MNetworkEnable
	float m_flScrollSpeed; // 0x7d0	
	bool m_bStartPointValid; // 0x7d4	
	bool m_bEndPointValid; // 0x7d5	
private:
	[[maybe_unused]] uint8_t __pad07d6[0x2]; // 0x7d6
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hStartPoint; // 0x7d8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEndPoint; // 0x7dc	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0x7e0	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0x7e1	
	
	// Datamap fields:
	// float InputSetScrollSpeed; // 0x0
	// Vector InputSetForce; // 0x0
	// void InputBreak; // 0x0
	// int32_t Breakable; // 0x7fffffff
	// int32_t Collide; // 0x7fffffff
	// int32_t Barbed; // 0x7fffffff
	// int32_t UseWind; // 0x7fffffff
	// int32_t Dangling; // 0x7fffffff
	// int32_t Type; // 0x7fffffff
	// int32_t RopeShader; // 0x7fffffff
	// CUtlString RopeMaterial; // 0x7fffffff
};

