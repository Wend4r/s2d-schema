#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf48
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "float32 m_flBlendWeight"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
class C_RagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0ed0[0x8]; // 0xed0
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< Vector > m_ragPos; // 0xed8	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< QAngle > m_ragAngles; // 0xef0	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0xf08	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRagdollSource; // 0xf0c	
	AttachmentHandle_t m_iEyeAttachment; // 0xf10	
private:
	[[maybe_unused]] uint8_t __pad0f11[0x3]; // 0xf11
public:
	float m_flBlendWeightCurrent; // 0xf14	
	CUtlVector< int32 > m_parentPhysicsBoneIndices; // 0xf18	
	CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // 0xf30	
};

