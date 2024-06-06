#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd8
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
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0xcc8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachedToEntity; // 0xcd0	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; // 0xcd4	
private:
	[[maybe_unused]] uint8_t __pad0cd5[0x3]; // 0xcd5
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "60.000000"
	// MNetworkEncodeFlags "2"
	float m_flSpriteFramerate; // 0xcd8	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flFrame; // 0xcdc	
	GameTime_t m_flDieTime; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0ce4[0xc]; // 0xce4
public:
	// MNetworkEnable
	uint32_t m_nBrightness; // 0xcf0	
	// MNetworkEnable
	float m_flBrightnessDuration; // 0xcf4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0xcf8	
	// MNetworkEnable
	float m_flScaleDuration; // 0xcfc	
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0xd00	
private:
	[[maybe_unused]] uint8_t __pad0d01[0x3]; // 0xd01
public:
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0xd04	
	// MNetworkEnable
	float m_flHDRColorScale; // 0xd08	
	GameTime_t m_flLastTime; // 0xd0c	
	float m_flMaxFrame; // 0xd10	
	float m_flStartScale; // 0xd14	
	float m_flDestScale; // 0xd18	
	GameTime_t m_flScaleTimeStart; // 0xd1c	
	int32_t m_nStartBrightness; // 0xd20	
	int32_t m_nDestBrightness; // 0xd24	
	GameTime_t m_flBrightnessTimeStart; // 0xd28	
private:
	[[maybe_unused]] uint8_t __pad0d2c[0x4]; // 0xd2c
public:
	CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0xd30	
private:
	[[maybe_unused]] uint8_t __pad0d38[0x98]; // 0xd38
public:
	int32_t m_nSpriteWidth; // 0xdd0	
	int32_t m_nSpriteHeight; // 0xdd4	
};

