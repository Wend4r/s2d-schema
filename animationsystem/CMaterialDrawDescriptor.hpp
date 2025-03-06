#pragma once

#include <cstdint>

struct CRenderBufferBinding;
// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0xd8
// 
// MGetKV3ClassDefaults
class CMaterialDrawDescriptor
{
public:
	float m_flUvDensity; // 0x0	
	Vector m_vTintColor; // 0x4	
	float m_flAlpha; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x2]; // 0x14
public:
	uint16_t m_nNumMeshlets; // 0x16	
private:
	[[maybe_unused]] uint8_t __pad0018[0x4]; // 0x18
public:
	uint32_t m_nFirstMeshlet; // 0x1c	
	uint32_t m_nAppliedIndexOffset; // 0x20	
	uint8_t m_nDepthVertexBufferIndex; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	RenderPrimitiveType_t m_nPrimitiveType; // 0x28	
	int32_t m_nBaseVertex; // 0x2c	
	int32_t m_nVertexCount; // 0x30	
	int32_t m_nStartIndex; // 0x34	
	int32_t m_nIndexCount; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x64]; // 0x3c
public:
	CRenderBufferBinding m_indexBuffer; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00c0[0x10]; // 0xc0
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_material; // 0xd0	
};

