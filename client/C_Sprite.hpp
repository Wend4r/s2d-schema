#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe30
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
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0xd20	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachedToEntity; // 0xd28	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; // 0xd2c	
private:
	[[maybe_unused]] uint8_t __pad0d2d[0x3]; // 0xd2d
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "60.000000"
	// MNetworkEncodeFlags "2"
	float m_flSpriteFramerate; // 0xd30	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flFrame; // 0xd34	
	GameTime_t m_flDieTime; // 0xd38	
private:
	[[maybe_unused]] uint8_t __pad0d3c[0xc]; // 0xd3c
public:
	// MNetworkEnable
	uint32_t m_nBrightness; // 0xd48	
	// MNetworkEnable
	float m_flBrightnessDuration; // 0xd4c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0xd50	
	// MNetworkEnable
	float m_flScaleDuration; // 0xd54	
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0xd58	
private:
	[[maybe_unused]] uint8_t __pad0d59[0x3]; // 0xd59
public:
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0xd5c	
	// MNetworkEnable
	float m_flHDRColorScale; // 0xd60	
	GameTime_t m_flLastTime; // 0xd64	
	float m_flMaxFrame; // 0xd68	
	float m_flStartScale; // 0xd6c	
	float m_flDestScale; // 0xd70	
	GameTime_t m_flScaleTimeStart; // 0xd74	
	int32_t m_nStartBrightness; // 0xd78	
	int32_t m_nDestBrightness; // 0xd7c	
	GameTime_t m_flBrightnessTimeStart; // 0xd80	
private:
	[[maybe_unused]] uint8_t __pad0d84[0x4]; // 0xd84
public:
	CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0xd88	
private:
	[[maybe_unused]] uint8_t __pad0d90[0x98]; // 0xd90
public:
	int32_t m_nSpriteWidth; // 0xe28	
	int32_t m_nSpriteHeight; // 0xe2c	
};

