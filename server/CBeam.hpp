#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e8
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
class CBeam : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "-25.000000"
	// MNetworkMaxValue "25.000000"
	// MNetworkEncodeFlags "2"
	float m_flFrameRate; // 0x748	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x74c	
	GameTime_t m_flFireTime; // 0x750	
	float m_flDamage; // 0x754	
	// MNetworkEnable
	uint8_t m_nNumBeamEnts; // 0x758	
private:
	[[maybe_unused]] uint8_t __pad0759[0x7]; // 0x759
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0x760	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0x768	
	// MNetworkEnable
	BeamType_t m_nBeamType; // 0x770	
	// MNetworkEnable
	uint32_t m_nBeamFlags; // 0x774	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hAttachEntity[10]; // 0x778	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachIndex[10]; // 0x7a0	
private:
	[[maybe_unused]] uint8_t __pad07aa[0x2]; // 0x7aa
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fWidth; // 0x7ac	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fEndWidth; // 0x7b0	
	// MNetworkEnable
	float m_fFadeLength; // 0x7b4	
	// MNetworkEnable
	float m_fHaloScale; // 0x7b8	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "1"
	float m_fAmplitude; // 0x7bc	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_fStartFrame; // 0x7c0	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_fSpeed; // 0x7c4	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkPriority "32"
	float m_flFrame; // 0x7c8	
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; // 0x7cc	
	// MNetworkEnable
	bool m_bTurnedOff; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d1[0x3]; // 0x7d1
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecEndPos; // 0x7d4	
	CHandle< CBaseEntity > m_hEndEntity; // 0x7e0	
	int32_t m_nDissolveType; // 0x7e4	
	
	// Datamap fields:
	// float InputWidth; // 0x0
	// float InputNoise; // 0x0
	// float InputColorRedValue; // 0x0
	// float InputColorGreenValue; // 0x0
	// float InputColorBlueValue; // 0x0
};

