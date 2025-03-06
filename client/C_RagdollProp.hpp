#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb78
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "float32 m_flBlendWeight"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
class C_RagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x8]; // 0xb00
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< Vector > m_ragPos; // 0xb08	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< QAngle > m_ragAngles; // 0xb20	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0xb38	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRagdollSource; // 0xb3c	
	AttachmentHandle_t m_iEyeAttachment; // 0xb40	
private:
	[[maybe_unused]] uint8_t __pad0b41[0x3]; // 0xb41
public:
	float m_flBlendWeightCurrent; // 0xb44	
	CUtlVector< int32 > m_parentPhysicsBoneIndices; // 0xb48	
	CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // 0xb60	
};

