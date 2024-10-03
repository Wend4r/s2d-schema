#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MNetworkVarNames "HMaterialStrong m_hSpriteMaterial"
// MNetworkVarNames "CHandle< CBaseEntity> m_hAttachedToEntity"
// MNetworkVarNames "AttachmentHandle_t m_nAttachment"
// MNetworkVarNames "float32 m_flSpriteFramerate"
// MNetworkVarNames "float32 m_flFrame"
// MNetworkVarNames "uint32 m_nBrightness"
// MNetworkVarNames "float32 m_flBrightnessDuration"
// MNetworkVarNames "float32 m_flSpriteScale"
// MNetworkVarNames "float32 m_flScaleDuration"
// MNetworkVarNames "bool m_bWorldSpaceScale"
// MNetworkVarNames "float32 m_flGlowProxySize"
// MNetworkVarNames "float32 m_flHDRColorScale"
class CSprite : public CBaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x750	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hAttachedToEntity; // 0x758	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; // 0x75c	
private:
	[[maybe_unused]] uint8_t __pad075d[0x3]; // 0x75d
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "60.000000"
	// MNetworkEncodeFlags "2"
	float m_flSpriteFramerate; // 0x760	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flFrame; // 0x764	
	GameTime_t m_flDieTime; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad076c[0xc]; // 0x76c
public:
	// MNetworkEnable
	uint32_t m_nBrightness; // 0x778	
	// MNetworkEnable
	float m_flBrightnessDuration; // 0x77c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0x780	
	// MNetworkEnable
	float m_flScaleDuration; // 0x784	
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0x788	
private:
	[[maybe_unused]] uint8_t __pad0789[0x3]; // 0x789
public:
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0x78c	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x790	
	GameTime_t m_flLastTime; // 0x794	
	float m_flMaxFrame; // 0x798	
	float m_flStartScale; // 0x79c	
	float m_flDestScale; // 0x7a0	
	GameTime_t m_flScaleTimeStart; // 0x7a4	
	int32_t m_nStartBrightness; // 0x7a8	
	int32_t m_nDestBrightness; // 0x7ac	
	GameTime_t m_flBrightnessTimeStart; // 0x7b0	
	int32_t m_nSpriteWidth; // 0x7b4	
	int32_t m_nSpriteHeight; // 0x7b8	
	
	// Datamap fields:
	// void CSpriteAnimateThink; // 0x0
	// void CSpriteExpandThink; // 0x0
	// void CSpriteAnimateUntilDead; // 0x0
	// void CSpriteBeginFadeOutThink; // 0x0
	// void InputHideSprite; // 0x0
	// void InputShowSprite; // 0x0
	// void InputToggleSprite; // 0x0
	// float InputColorRedValue; // 0x0
	// float InputColorGreenValue; // 0x0
	// float InputColorBlueValue; // 0x0
};

