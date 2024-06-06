#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd28
// Has VTable
// 
// MNetworkIncludeByName "m_clrRender"
// MNetworkExcludeByName "CGameSceneNode::m_vecOrigin"
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "Vector m_vDirection"
// MNetworkVarNames "string_t m_iszEffectName"
// MNetworkVarNames "string_t m_iszSSEffectName"
// MNetworkVarNames "Color m_clrOverlay"
// MNetworkVarNames "bool m_bOn"
// MNetworkVarNames "bool m_bmaxColor"
// MNetworkVarNames "float32 m_flSize"
// MNetworkVarNames "float32 m_flHazeScale"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "float32 m_flAlphaHaze"
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flAlphaHdr"
// MNetworkVarNames "float32 m_flFarZScale"
class C_Sun : public C_BaseModelEntity
{
public:
	ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0xcc8	
	ParticleIndex_t m_fxSunFlareEffectIndex; // 0xccc	
	float m_fdistNormalize; // 0xcd0	
	Vector m_vSunPos; // 0xcd4	
	// MNetworkEnable
	Vector m_vDirection; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0cec[0x4]; // 0xcec
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; // 0xcf0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; // 0xcf8	
	// MNetworkEnable
	Color m_clrOverlay; // 0xd00	
	// MNetworkEnable
	bool m_bOn; // 0xd04	
	// MNetworkEnable
	bool m_bmaxColor; // 0xd05	
private:
	[[maybe_unused]] uint8_t __pad0d06[0x2]; // 0xd06
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flSize; // 0xd08	
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flHazeScale; // 0xd0c	
	// MNetworkEnable
	// MNetworkMinValue "-360.000000"
	// MNetworkMaxValue "360.000000"
	float m_flRotation; // 0xd10	
	// MNetworkEnable
	// MNetworkChangeCallback "OnHDRScaleChanged"
	float m_flHDRColorScale; // 0xd14	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHaze; // 0xd18	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaScale; // 0xd1c	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHdr; // 0xd20	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flFarZScale; // 0xd24	
};

