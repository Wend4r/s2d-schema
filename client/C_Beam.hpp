#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8c8
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
	float m_flFrameRate; // 0x808	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x80c	
	GameTime_t m_flFireTime; // 0x810	
	float m_flDamage; // 0x814	
	// MNetworkEnable
	uint8_t m_nNumBeamEnts; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad0819[0x3]; // 0x819
public:
	int32_t m_queryHandleHalo; // 0x81c	
private:
	[[maybe_unused]] uint8_t __pad0820[0x20]; // 0x820
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0x840	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0x848	
	// MNetworkEnable
	BeamType_t m_nBeamType; // 0x850	
	// MNetworkEnable
	uint32_t m_nBeamFlags; // 0x854	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachEntity[10]; // 0x858	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachIndex[10]; // 0x880	
private:
	[[maybe_unused]] uint8_t __pad088a[0x2]; // 0x88a
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fWidth; // 0x88c	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fEndWidth; // 0x890	
	// MNetworkEnable
	float m_fFadeLength; // 0x894	
	// MNetworkEnable
	float m_fHaloScale; // 0x898	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "1"
	float m_fAmplitude; // 0x89c	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_fStartFrame; // 0x8a0	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_fSpeed; // 0x8a4	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkPriority "32"
	float m_flFrame; // 0x8a8	
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; // 0x8ac	
	// MNetworkEnable
	bool m_bTurnedOff; // 0x8b0	
private:
	[[maybe_unused]] uint8_t __pad08b1[0x3]; // 0x8b1
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecEndPos; // 0x8b4	
	CHandle< C_BaseEntity > m_hEndEntity; // 0x8c0	
};

