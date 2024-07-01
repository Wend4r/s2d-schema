#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x920
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
class C_Sprite : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x810	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachedToEntity; // 0x818	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; // 0x81c	
private:
	[[maybe_unused]] uint8_t __pad081d[0x3]; // 0x81d
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "60.000000"
	// MNetworkEncodeFlags "2"
	float m_flSpriteFramerate; // 0x820	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flFrame; // 0x824	
	GameTime_t m_flDieTime; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad082c[0xc]; // 0x82c
public:
	// MNetworkEnable
	uint32_t m_nBrightness; // 0x838	
	// MNetworkEnable
	float m_flBrightnessDuration; // 0x83c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0x840	
	// MNetworkEnable
	float m_flScaleDuration; // 0x844	
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad0849[0x3]; // 0x849
public:
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0x84c	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x850	
	GameTime_t m_flLastTime; // 0x854	
	float m_flMaxFrame; // 0x858	
	float m_flStartScale; // 0x85c	
	float m_flDestScale; // 0x860	
	GameTime_t m_flScaleTimeStart; // 0x864	
	int32_t m_nStartBrightness; // 0x868	
	int32_t m_nDestBrightness; // 0x86c	
	GameTime_t m_flBrightnessTimeStart; // 0x870	
private:
	[[maybe_unused]] uint8_t __pad0874[0x4]; // 0x874
public:
	CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0x878	
private:
	[[maybe_unused]] uint8_t __pad0880[0x98]; // 0x880
public:
	int32_t m_nSpriteWidth; // 0x918	
	int32_t m_nSpriteHeight; // 0x91c	
};

