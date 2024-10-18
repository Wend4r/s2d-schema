#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct C_RopeKeyframe::CPhysicsDelegate;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1110
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
	[[maybe_unused]] uint8_t __pad0d28[0x8]; // 0xd28
public:
	CBitVec< 10 > m_LinksTouchingSomething; // 0xd30	
	int32_t m_nLinksTouchingSomething; // 0xd34	
	bool m_bApplyWind; // 0xd38	
private:
	[[maybe_unused]] uint8_t __pad0d39[0x3]; // 0xd39
public:
	int32_t m_fPrevLockedPoints; // 0xd3c	
	int32_t m_iForcePointMoveCounter; // 0xd40	
	bool m_bPrevEndPointPos[2]; // 0xd44	
private:
	[[maybe_unused]] uint8_t __pad0d46[0x2]; // 0xd46
public:
	Vector m_vPrevEndPointPos[2]; // 0xd48	
	float m_flCurScroll; // 0xd60	
	// MNetworkEnable
	float m_flScrollSpeed; // 0xd64	
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0xd68	
private:
	[[maybe_unused]] uint8_t __pad0d6a[0x6]; // 0xd6a
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0xd70	
private:
	[[maybe_unused]] uint8_t __pad0d78[0x270]; // 0xd78
public:
	Vector m_LightValues[10]; // 0xfe8	
	// MNetworkEnable
	uint8_t m_nSegments; // 0x1060	
private:
	[[maybe_unused]] uint8_t __pad1061[0x3]; // 0x1061
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hStartPoint; // 0x1064	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEndPoint; // 0x1068	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0x106c	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0x106d	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0x106e	
private:
	[[maybe_unused]] uint8_t __pad106f[0x1]; // 0x106f
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; // 0x1070	
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; // 0x1072	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0x1074	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0x1078	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0x1079	
private:
	[[maybe_unused]] uint8_t __pad107a[0x2]; // 0x107a
public:
	// MNetworkEnable
	float m_Width; // 0x107c	
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0x1080	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x1090	
	int32_t m_TextureHeight; // 0x1098	
	Vector m_vecImpulse; // 0x109c	
	Vector m_vecPreviousImpulse; // 0x10a8	
	float m_flCurrentGustTimer; // 0x10b4	
	float m_flCurrentGustLifetime; // 0x10b8	
	float m_flTimeToNextGust; // 0x10bc	
	Vector m_vWindDir; // 0x10c0	
	Vector m_vColorMod; // 0x10cc	
	Vector m_vCachedEndPointAttachmentPos[2]; // 0x10d8	
	QAngle m_vCachedEndPointAttachmentAngle[2]; // 0x10f0	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0x1108	
	struct 
	{
		uint8_t m_bEndPointAttachmentPositionsDirty: 1; 		
		uint8_t m_bEndPointAttachmentAnglesDirty: 1; 		
		uint8_t m_bNewDataThisFrame: 1; 		
		uint8_t m_bPhysicsInitted: 1; 		
		uint8_t __pad0: 4;
	}; // 8 bits
};

