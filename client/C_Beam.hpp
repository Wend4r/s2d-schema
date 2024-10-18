#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde8
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_nRenderFX"
// MNetworkIncludeByName "m_nRenderMode"
// MNetworkIncludeByName "m_clrRender"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkOverride "m_clrRender"
// MNetworkVarNames "float32 m_flFrameRate"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "uint8 m_nNumBeamEnts"
// MNetworkVarNames "HMaterialStrong m_hBaseMaterial"
// MNetworkVarNames "HMaterialStrong m_nHaloIndex"
// MNetworkVarNames "BeamType_t m_nBeamType"
// MNetworkVarNames "uint32 m_nBeamFlags"
// MNetworkVarNames "CHandle< CBaseEntity > m_hAttachEntity"
// MNetworkVarNames "AttachmentHandle_t m_nAttachIndex"
// MNetworkVarNames "float32 m_fWidth"
// MNetworkVarNames "float32 m_fEndWidth"
// MNetworkVarNames "float32 m_fFadeLength"
// MNetworkVarNames "float32 m_fHaloScale"
// MNetworkVarNames "float32 m_fAmplitude"
// MNetworkVarNames "float32 m_fStartFrame"
// MNetworkVarNames "float32 m_fSpeed"
// MNetworkVarNames "float32 m_flFrame"
// MNetworkVarNames "BeamClipStyle_t m_nClipStyle"
// MNetworkVarNames "bool m_bTurnedOff"
// MNetworkVarNames "Vector m_vecEndPos"
class C_Beam : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "-25.000000"
	// MNetworkMaxValue "25.000000"
	// MNetworkEncodeFlags "2"
	float m_flFrameRate; // 0xd28	
	// MNetworkEnable
	float m_flHDRColorScale; // 0xd2c	
	GameTime_t m_flFireTime; // 0xd30	
	float m_flDamage; // 0xd34	
	// MNetworkEnable
	uint8_t m_nNumBeamEnts; // 0xd38	
private:
	[[maybe_unused]] uint8_t __pad0d39[0x3]; // 0xd39
public:
	int32_t m_queryHandleHalo; // 0xd3c	
private:
	[[maybe_unused]] uint8_t __pad0d40[0x20]; // 0xd40
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0xd60	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0xd68	
	// MNetworkEnable
	BeamType_t m_nBeamType; // 0xd70	
	// MNetworkEnable
	uint32_t m_nBeamFlags; // 0xd74	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachEntity[10]; // 0xd78	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachIndex[10]; // 0xda0	
private:
	[[maybe_unused]] uint8_t __pad0daa[0x2]; // 0xdaa
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fWidth; // 0xdac	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fEndWidth; // 0xdb0	
	// MNetworkEnable
	float m_fFadeLength; // 0xdb4	
	// MNetworkEnable
	float m_fHaloScale; // 0xdb8	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "1"
	float m_fAmplitude; // 0xdbc	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_fStartFrame; // 0xdc0	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_fSpeed; // 0xdc4	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkPriority "32"
	float m_flFrame; // 0xdc8	
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; // 0xdcc	
	// MNetworkEnable
	bool m_bTurnedOff; // 0xdd0	
private:
	[[maybe_unused]] uint8_t __pad0dd1[0x3]; // 0xdd1
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecEndPos; // 0xdd4	
	CHandle< C_BaseEntity > m_hEndEntity; // 0xde0	
};

