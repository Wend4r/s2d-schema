#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct C_RopeKeyframe::CPhysicsDelegate;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbf0
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
	[[maybe_unused]] uint8_t __pad0808[0x8]; // 0x808
public:
	CBitVec< 10 > m_LinksTouchingSomething; // 0x810	
	int32_t m_nLinksTouchingSomething; // 0x814	
	bool m_bApplyWind; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad0819[0x3]; // 0x819
public:
	int32_t m_fPrevLockedPoints; // 0x81c	
	int32_t m_iForcePointMoveCounter; // 0x820	
	bool m_bPrevEndPointPos[2]; // 0x824	
private:
	[[maybe_unused]] uint8_t __pad0826[0x2]; // 0x826
public:
	Vector m_vPrevEndPointPos[2]; // 0x828	
	float m_flCurScroll; // 0x840	
	// MNetworkEnable
	float m_flScrollSpeed; // 0x844	
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad084a[0x6]; // 0x84a
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x850	
private:
	[[maybe_unused]] uint8_t __pad0858[0x270]; // 0x858
public:
	Vector m_LightValues[10]; // 0xac8	
	// MNetworkEnable
	uint8_t m_nSegments; // 0xb40	
private:
	[[maybe_unused]] uint8_t __pad0b41[0x3]; // 0xb41
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hStartPoint; // 0xb44	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEndPoint; // 0xb48	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0xb4c	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0xb4d	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0xb4e	
private:
	[[maybe_unused]] uint8_t __pad0b4f[0x1]; // 0xb4f
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; // 0xb50	
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; // 0xb52	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0xb54	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0xb58	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0xb59	
private:
	[[maybe_unused]] uint8_t __pad0b5a[0x2]; // 0xb5a
public:
	// MNetworkEnable
	float m_Width; // 0xb5c	
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0xb60	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xb70	
	int32_t m_TextureHeight; // 0xb78	
	Vector m_vecImpulse; // 0xb7c	
	Vector m_vecPreviousImpulse; // 0xb88	
	float m_flCurrentGustTimer; // 0xb94	
	float m_flCurrentGustLifetime; // 0xb98	
	float m_flTimeToNextGust; // 0xb9c	
	Vector m_vWindDir; // 0xba0	
	Vector m_vColorMod; // 0xbac	
	Vector m_vCachedEndPointAttachmentPos[2]; // 0xbb8	
	QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xbd0	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0xbe8	
	struct 
	{
		uint8_t m_bEndPointAttachmentPositionsDirty: 1; 		
		uint8_t m_bEndPointAttachmentAnglesDirty: 1; 		
		uint8_t m_bNewDataThisFrame: 1; 		
		uint8_t m_bPhysicsInitted: 1; 		
		uint8_t __pad0: 4;
	}; // 8 bits
};

