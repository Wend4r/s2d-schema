#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe38
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
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0xd28	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachedToEntity; // 0xd30	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; // 0xd34	
private:
	[[maybe_unused]] uint8_t __pad0d35[0x3]; // 0xd35
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "60.000000"
	// MNetworkEncodeFlags "2"
	float m_flSpriteFramerate; // 0xd38	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flFrame; // 0xd3c	
	GameTime_t m_flDieTime; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d44[0xc]; // 0xd44
public:
	// MNetworkEnable
	uint32_t m_nBrightness; // 0xd50	
	// MNetworkEnable
	float m_flBrightnessDuration; // 0xd54	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0xd58	
	// MNetworkEnable
	float m_flScaleDuration; // 0xd5c	
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0xd60	
private:
	[[maybe_unused]] uint8_t __pad0d61[0x3]; // 0xd61
public:
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0xd64	
	// MNetworkEnable
	float m_flHDRColorScale; // 0xd68	
	GameTime_t m_flLastTime; // 0xd6c	
	float m_flMaxFrame; // 0xd70	
	float m_flStartScale; // 0xd74	
	float m_flDestScale; // 0xd78	
	GameTime_t m_flScaleTimeStart; // 0xd7c	
	int32_t m_nStartBrightness; // 0xd80	
	int32_t m_nDestBrightness; // 0xd84	
	GameTime_t m_flBrightnessTimeStart; // 0xd88	
private:
	[[maybe_unused]] uint8_t __pad0d8c[0x4]; // 0xd8c
public:
	CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0xd90	
private:
	[[maybe_unused]] uint8_t __pad0d98[0x98]; // 0xd98
public:
	int32_t m_nSpriteWidth; // 0xe30	
	int32_t m_nSpriteHeight; // 0xe34	
};

