#pragma once

#include <cstdint>

struct CRenderBufferBinding;
// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0xe8
// 
// MGetKV3ClassDefaults
class CMaterialDrawDescriptor
{
public:
	float m_flUvDensity; // 0x0	
	Vector m_vTintColor; // 0x4	
	float m_flAlpha; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	uint32_t m_nFirstMeshlet; // 0x18	
	uint16_t m_nNumMeshlets; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001e[0x2]; // 0x1e
public:
	RenderPrimitiveType_t m_nPrimitiveType; // 0x20	
	int32_t m_nBaseVertex; // 0x24	
	int32_t m_nVertexCount; // 0x28	
	int32_t m_nStartIndex; // 0x2c	
	int32_t m_nIndexCount; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x84]; // 0x34
public:
	CRenderBufferBinding m_indexBuffer; // 0xb8	
private:
	[[maybe_unused]] uint8_t __pad00d0[0x8]; // 0xd0
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_material; // 0xd8	
};

