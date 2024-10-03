#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a8
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
	[[maybe_unused]] uint8_t __pad0750[0x8]; // 0x750
public:
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0x758	
private:
	[[maybe_unused]] uint8_t __pad075a[0x6]; // 0x75a
public:
	CUtlSymbolLarge m_iNextLinkName; // 0x760	
	// MNetworkEnable
	int16_t m_Slack; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad076a[0x2]; // 0x76a
public:
	// MNetworkEnable
	float m_Width; // 0x76c	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0x770	
	// MNetworkEnable
	uint8_t m_nSegments; // 0x774	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0x775	
private:
	[[maybe_unused]] uint8_t __pad0776[0x2]; // 0x776
public:
	CUtlSymbolLarge m_strRopeMaterialModel; // 0x778	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x780	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0x788	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0x789	
	// MNetworkEnable
	int16_t m_RopeLength; // 0x78a	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0x78c	
	bool m_bCreatedFromMapFile; // 0x78d	
private:
	[[maybe_unused]] uint8_t __pad078e[0x2]; // 0x78e
public:
	// MNetworkEnable
	float m_flScrollSpeed; // 0x790	
	bool m_bStartPointValid; // 0x794	
	bool m_bEndPointValid; // 0x795	
private:
	[[maybe_unused]] uint8_t __pad0796[0x2]; // 0x796
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hStartPoint; // 0x798	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEndPoint; // 0x79c	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0x7a0	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0x7a1	
	
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

