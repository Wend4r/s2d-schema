#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc90
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
class C_BaseCombatCharacter : public C_BaseFlex
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWearablesChanged"
	C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // 0xc08	
	AttachmentHandle_t m_leftFootAttachment; // 0xc20	
	AttachmentHandle_t m_rightFootAttachment; // 0xc21	
private:
	[[maybe_unused]] uint8_t __pad0c22[0x2]; // 0xc22
public:
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0xc24	
	float m_flWaterWorldZ; // 0xc28	
	float m_flWaterNextTraceTime; // 0xc2c	
};

