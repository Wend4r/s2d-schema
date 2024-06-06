#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10f8
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
// MNetworkVarNames "float m_flFieldOfView"
class C_BaseCombatCharacter : public C_BaseFlex
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWearablesChanged"
	C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // 0x1068	
	AttachmentHandle_t m_leftFootAttachment; // 0x1080	
	AttachmentHandle_t m_rightFootAttachment; // 0x1081	
private:
	[[maybe_unused]] uint8_t __pad1082[0x2]; // 0x1082
public:
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0x1084	
	float m_flWaterWorldZ; // 0x1088	
	float m_flWaterNextTraceTime; // 0x108c	
	// MNetworkEnable
	float m_flFieldOfView; // 0x1090	
};

