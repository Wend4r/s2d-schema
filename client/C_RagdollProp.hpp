#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1000
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "float32 m_flBlendWeight"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
class C_RagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0f88[0x8]; // 0xf88
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< Vector > m_ragPos; // 0xf90	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< QAngle > m_ragAngles; // 0xfa8	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0xfc0	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRagdollSource; // 0xfc4	
	AttachmentHandle_t m_iEyeAttachment; // 0xfc8	
private:
	[[maybe_unused]] uint8_t __pad0fc9[0x3]; // 0xfc9
public:
	float m_flBlendWeightCurrent; // 0xfcc	
	CUtlVector< int32 > m_parentPhysicsBoneIndices; // 0xfd0	
	CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // 0xfe8	
};

