#pragma once

#include <cstdint>

struct CRenderBufferBinding;
// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x28
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4	
	uint32_t m_nDrawCallIndex; // 0x8	
	MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc	
	CRenderBufferBinding m_extraBufferBinding; // 0x10	
};

