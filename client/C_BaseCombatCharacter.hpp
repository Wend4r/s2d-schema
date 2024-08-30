#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb0
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
class C_BaseCombatCharacter : public C_BaseFlex
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWearablesChanged"
	C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // 0xc28	
	AttachmentHandle_t m_leftFootAttachment; // 0xc40	
	AttachmentHandle_t m_rightFootAttachment; // 0xc41	
private:
	[[maybe_unused]] uint8_t __pad0c42[0x2]; // 0xc42
public:
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0xc44	
	float m_flWaterWorldZ; // 0xc48	
	float m_flWaterNextTraceTime; // 0xc4c	
};

