#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8f0
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
	float m_flFrameRate; // 0x830	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x834	
	GameTime_t m_flFireTime; // 0x838	
	float m_flDamage; // 0x83c	
	// MNetworkEnable
	uint8_t m_nNumBeamEnts; // 0x840	
private:
	[[maybe_unused]] uint8_t __pad0841[0x3]; // 0x841
public:
	int32_t m_queryHandleHalo; // 0x844	
private:
	[[maybe_unused]] uint8_t __pad0848[0x20]; // 0x848
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0x868	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0x870	
	// MNetworkEnable
	BeamType_t m_nBeamType; // 0x878	
	// MNetworkEnable
	uint32_t m_nBeamFlags; // 0x87c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachEntity[10]; // 0x880	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachIndex[10]; // 0x8a8	
private:
	[[maybe_unused]] uint8_t __pad08b2[0x2]; // 0x8b2
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fWidth; // 0x8b4	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fEndWidth; // 0x8b8	
	// MNetworkEnable
	float m_fFadeLength; // 0x8bc	
	// MNetworkEnable
	float m_fHaloScale; // 0x8c0	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "1"
	float m_fAmplitude; // 0x8c4	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_fStartFrame; // 0x8c8	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_fSpeed; // 0x8cc	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkPriority "32"
	float m_flFrame; // 0x8d0	
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; // 0x8d4	
	// MNetworkEnable
	bool m_bTurnedOff; // 0x8d8	
private:
	[[maybe_unused]] uint8_t __pad08d9[0x3]; // 0x8d9
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecEndPos; // 0x8dc	
	CHandle< C_BaseEntity > m_hEndEntity; // 0x8e8	
};

