#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb8
// Has VTable
class CShatterGlassShard
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	uint32_t m_hShardHandle; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< Vector2D > m_vecPanelVertices; // 0x10	
	Vector2D m_vLocalPanelSpaceOrigin; // 0x28	
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x30	
	CHandle< CShatterGlassShardPhysics > m_hPhysicsEntity; // 0x38	
	CHandle< CFuncShatterglass > m_hParentPanel; // 0x3c	
	uint32_t m_hParentShard; // 0x40	
	ShatterGlassStressType m_ShatterStressType; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	Vector m_vecStressVelocity; // 0x48	
	bool m_bCreatedModel; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
public:
	float m_flLongestEdge; // 0x58	
	float m_flShortestEdge; // 0x5c	
	float m_flLongestAcross; // 0x60	
	float m_flShortestAcross; // 0x64	
	float m_flSumOfAllEdges; // 0x68	
	float m_flArea; // 0x6c	
	OnFrame m_nOnFrameEdge; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0071[0x3]; // 0x71
public:
	int32_t m_nSubShardGeneration; // 0x74	
	Vector2D m_vecAverageVertPosition; // 0x78	
	bool m_bAverageVertPositionIsValid; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
public:
	Vector2D m_vecPanelSpaceStressPositionA; // 0x84	
	Vector2D m_vecPanelSpaceStressPositionB; // 0x8c	
	bool m_bStressPositionAIsValid; // 0x94	
	bool m_bStressPositionBIsValid; // 0x95	
	bool m_bFlaggedForRemoval; // 0x96	
private:
	[[maybe_unused]] uint8_t __pad0097[0x1]; // 0x97
public:
	GameTime_t m_flPhysicsEntitySpawnedAtTime; // 0x98	
	CHandle< CBaseEntity > m_hEntityHittingMe; // 0x9c	
	CUtlVector< uint32 > m_vecNeighbors; // 0xa0	
};

