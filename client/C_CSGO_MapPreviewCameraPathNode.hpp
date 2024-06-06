#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x598
// Has VTable
class C_CSGO_MapPreviewCameraPathNode : public C_BaseEntity
{
public:
	CUtlSymbolLarge m_szParentPathUniqueID; // 0x548	
	int32_t m_nPathIndex; // 0x550	
	Vector m_vInTangentLocal; // 0x554	
	Vector m_vOutTangentLocal; // 0x560	
	float m_flFOV; // 0x56c	
	float m_flCameraSpeed; // 0x570	
	float m_flEaseIn; // 0x574	
	float m_flEaseOut; // 0x578	
	Vector m_vInTangentWorld; // 0x57c	
	Vector m_vOutTangentWorld; // 0x588	
};

