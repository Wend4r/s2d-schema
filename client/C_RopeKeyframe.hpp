#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct C_RopeKeyframe::CPhysicsDelegate;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1108
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nMinCPULevel"
// MNetworkIncludeByName "m_nMaxCPULevel"
// MNetworkIncludeByName "m_nMinGPULevel"
// MNetworkIncludeByName "m_nMaxGPULevel"
// MNetworkVarNames "float32 m_flScrollSpeed"
// MNetworkVarNames "uint16 m_RopeFlags"
// MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
// MNetworkVarNames "uint8 m_nSegments"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hStartPoint"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hEndPoint"
// MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
// MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
// MNetworkVarNames "uint8 m_Subdiv"
// MNetworkVarNames "int16 m_RopeLength"
// MNetworkVarNames "int16 m_Slack"
// MNetworkVarNames "float32 m_TextureScale"
// MNetworkVarNames "uint8 m_fLockedPoints"
// MNetworkVarNames "uint8 m_nChangeCount"
// MNetworkVarNames "float32 m_Width"
// MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
class C_RopeKeyframe : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0d20[0x8]; // 0xd20
public:
	CBitVec< 10 > m_LinksTouchingSomething; // 0xd28	
	int32_t m_nLinksTouchingSomething; // 0xd2c	
	bool m_bApplyWind; // 0xd30	
private:
	[[maybe_unused]] uint8_t __pad0d31[0x3]; // 0xd31
public:
	int32_t m_fPrevLockedPoints; // 0xd34	
	int32_t m_iForcePointMoveCounter; // 0xd38	
	bool m_bPrevEndPointPos[2]; // 0xd3c	
private:
	[[maybe_unused]] uint8_t __pad0d3e[0x2]; // 0xd3e
public:
	Vector m_vPrevEndPointPos[2]; // 0xd40	
	float m_flCurScroll; // 0xd58	
	// MNetworkEnable
	float m_flScrollSpeed; // 0xd5c	
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0xd60	
private:
	[[maybe_unused]] uint8_t __pad0d62[0x6]; // 0xd62
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0xd68	
private:
	[[maybe_unused]] uint8_t __pad0d70[0x270]; // 0xd70
public:
	Vector m_LightValues[10]; // 0xfe0	
	// MNetworkEnable
	uint8_t m_nSegments; // 0x1058	
private:
	[[maybe_unused]] uint8_t __pad1059[0x3]; // 0x1059
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hStartPoint; // 0x105c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEndPoint; // 0x1060	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0x1064	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0x1065	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0x1066	
private:
	[[maybe_unused]] uint8_t __pad1067[0x1]; // 0x1067
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; // 0x1068	
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; // 0x106a	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0x106c	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0x1070	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0x1071	
private:
	[[maybe_unused]] uint8_t __pad1072[0x2]; // 0x1072
public:
	// MNetworkEnable
	float m_Width; // 0x1074	
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0x1078	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x1088	
	int32_t m_TextureHeight; // 0x1090	
	Vector m_vecImpulse; // 0x1094	
	Vector m_vecPreviousImpulse; // 0x10a0	
	float m_flCurrentGustTimer; // 0x10ac	
	float m_flCurrentGustLifetime; // 0x10b0	
	float m_flTimeToNextGust; // 0x10b4	
	Vector m_vWindDir; // 0x10b8	
	Vector m_vColorMod; // 0x10c4	
	Vector m_vCachedEndPointAttachmentPos[2]; // 0x10d0	
	QAngle m_vCachedEndPointAttachmentAngle[2]; // 0x10e8	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0x1100	
	struct 
	{
		uint8_t m_bEndPointAttachmentPositionsDirty: 1; 		
		uint8_t m_bEndPointAttachmentAnglesDirty: 1; 		
		uint8_t m_bNewDataThisFrame: 1; 		
		uint8_t m_bPhysicsInitted: 1; 		
		uint8_t __pad0: 4;
	}; // 8 bits
};

