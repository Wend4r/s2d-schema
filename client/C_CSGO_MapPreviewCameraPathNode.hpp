#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b8
// Has VTable
class C_CSGO_MapPreviewCameraPathNode : public C_BaseEntity
{
public:
	CUtlSymbolLarge m_szParentPathUniqueID; // 0x568	
	int32_t m_nPathIndex; // 0x570	
	Vector m_vInTangentLocal; // 0x574	
	Vector m_vOutTangentLocal; // 0x580	
	float m_flFOV; // 0x58c	
	float m_flCameraSpeed; // 0x590	
	float m_flEaseIn; // 0x594	
	float m_flEaseOut; // 0x598	
	Vector m_vInTangentWorld; // 0x59c	
	Vector m_vOutTangentWorld; // 0x5a8	
};

