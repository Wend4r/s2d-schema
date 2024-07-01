#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct C_RopeKeyframe::CPhysicsDelegate;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbf8
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
	[[maybe_unused]] uint8_t __pad0810[0x8]; // 0x810
public:
	CBitVec< 10 > m_LinksTouchingSomething; // 0x818	
	int32_t m_nLinksTouchingSomething; // 0x81c	
	bool m_bApplyWind; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0821[0x3]; // 0x821
public:
	int32_t m_fPrevLockedPoints; // 0x824	
	int32_t m_iForcePointMoveCounter; // 0x828	
	bool m_bPrevEndPointPos[2]; // 0x82c	
private:
	[[maybe_unused]] uint8_t __pad082e[0x2]; // 0x82e
public:
	Vector m_vPrevEndPointPos[2]; // 0x830	
	float m_flCurScroll; // 0x848	
	// MNetworkEnable
	float m_flScrollSpeed; // 0x84c	
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0x850	
private:
	[[maybe_unused]] uint8_t __pad0852[0x6]; // 0x852
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x858	
private:
	[[maybe_unused]] uint8_t __pad0860[0x270]; // 0x860
public:
	Vector m_LightValues[10]; // 0xad0	
	// MNetworkEnable
	uint8_t m_nSegments; // 0xb48	
private:
	[[maybe_unused]] uint8_t __pad0b49[0x3]; // 0xb49
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hStartPoint; // 0xb4c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEndPoint; // 0xb50	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0xb54	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0xb55	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0xb56	
private:
	[[maybe_unused]] uint8_t __pad0b57[0x1]; // 0xb57
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; // 0xb58	
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; // 0xb5a	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0xb5c	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0xb60	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0xb61	
private:
	[[maybe_unused]] uint8_t __pad0b62[0x2]; // 0xb62
public:
	// MNetworkEnable
	float m_Width; // 0xb64	
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0xb68	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xb78	
	int32_t m_TextureHeight; // 0xb80	
	Vector m_vecImpulse; // 0xb84	
	Vector m_vecPreviousImpulse; // 0xb90	
	float m_flCurrentGustTimer; // 0xb9c	
	float m_flCurrentGustLifetime; // 0xba0	
	float m_flTimeToNextGust; // 0xba4	
	Vector m_vWindDir; // 0xba8	
	Vector m_vColorMod; // 0xbb4	
	Vector m_vCachedEndPointAttachmentPos[2]; // 0xbc0	
	QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xbd8	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0xbf0	
	struct 
	{
		uint8_t m_bEndPointAttachmentPositionsDirty: 1; 		
		uint8_t m_bEndPointAttachmentAnglesDirty: 1; 		
		uint8_t m_bNewDataThisFrame: 1; 		
		uint8_t m_bPhysicsInitted: 1; 		
		uint8_t __pad0: 4;
	}; // 8 bits
};

