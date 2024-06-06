#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct C_RopeKeyframe::CPhysicsDelegate;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10b0
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
	[[maybe_unused]] uint8_t __pad0cc8[0x8]; // 0xcc8
public:
	CBitVec< 10 > m_LinksTouchingSomething; // 0xcd0	
	int32_t m_nLinksTouchingSomething; // 0xcd4	
	bool m_bApplyWind; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0cd9[0x3]; // 0xcd9
public:
	int32_t m_fPrevLockedPoints; // 0xcdc	
	int32_t m_iForcePointMoveCounter; // 0xce0	
	bool m_bPrevEndPointPos[2]; // 0xce4	
private:
	[[maybe_unused]] uint8_t __pad0ce6[0x2]; // 0xce6
public:
	Vector m_vPrevEndPointPos[2]; // 0xce8	
	float m_flCurScroll; // 0xd00	
	// MNetworkEnable
	float m_flScrollSpeed; // 0xd04	
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0xd08	
private:
	[[maybe_unused]] uint8_t __pad0d0a[0x6]; // 0xd0a
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0xd10	
private:
	[[maybe_unused]] uint8_t __pad0d18[0x270]; // 0xd18
public:
	Vector m_LightValues[10]; // 0xf88	
	// MNetworkEnable
	uint8_t m_nSegments; // 0x1000	
private:
	[[maybe_unused]] uint8_t __pad1001[0x3]; // 0x1001
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hStartPoint; // 0x1004	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEndPoint; // 0x1008	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0x100c	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0x100d	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0x100e	
private:
	[[maybe_unused]] uint8_t __pad100f[0x1]; // 0x100f
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; // 0x1010	
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; // 0x1012	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0x1014	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0x1018	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0x1019	
private:
	[[maybe_unused]] uint8_t __pad101a[0x2]; // 0x101a
public:
	// MNetworkEnable
	float m_Width; // 0x101c	
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0x1020	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x1030	
	int32_t m_TextureHeight; // 0x1038	
	Vector m_vecImpulse; // 0x103c	
	Vector m_vecPreviousImpulse; // 0x1048	
	float m_flCurrentGustTimer; // 0x1054	
	float m_flCurrentGustLifetime; // 0x1058	
	float m_flTimeToNextGust; // 0x105c	
	Vector m_vWindDir; // 0x1060	
	Vector m_vColorMod; // 0x106c	
	Vector m_vCachedEndPointAttachmentPos[2]; // 0x1078	
	QAngle m_vCachedEndPointAttachmentAngle[2]; // 0x1090	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0x10a8	
	struct 
	{
		uint8_t m_bEndPointAttachmentPositionsDirty: 1; 		
		uint8_t m_bEndPointAttachmentAnglesDirty: 1; 		
		uint8_t m_bNewDataThisFrame: 1; 		
		uint8_t m_bPhysicsInitted: 1; 		
		uint8_t __pad0: 4;
	}; // 8 bits
};

