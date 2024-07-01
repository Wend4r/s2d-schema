#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xae8
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "float32 m_flBlendWeight"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
class C_RagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a70[0x8]; // 0xa70
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< Vector > m_ragPos; // 0xa78	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< QAngle > m_ragAngles; // 0xa90	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0xaa8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRagdollSource; // 0xaac	
	AttachmentHandle_t m_iEyeAttachment; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab1[0x3]; // 0xab1
public:
	float m_flBlendWeightCurrent; // 0xab4	
	CUtlVector< int32 > m_parentPhysicsBoneIndices; // 0xab8	
	CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // 0xad0	
};

