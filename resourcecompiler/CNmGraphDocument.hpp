#pragma once

#include <cstdint>

struct CNmGraphDocFlowGraph;
struct CNmVariationHierarchy;
// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x90
// 
// MGetKV3ClassDefaults
class CNmGraphDocument
{
public:
	CNmGraphDocFlowGraph* m_pRootGraph; // 0x0	
	CNmVariationHierarchy m_variationHierarchy; // 0x8	
	V_uuid_t m_runtimeVersionID; // 0x20	
};

