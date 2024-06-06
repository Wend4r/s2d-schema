#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CMoverPathNode : public CPointEntity
{
public:
	Vector m_vInTangentLocal; // 0x4c0	
	Vector m_vOutTangentLocal; // 0x4cc	
	CUtlSymbolLarge m_szParentPathUniqueID; // 0x4d8	
	CEntityIOOutput m_OnPassThrough; // 0x4e0	
	CHandle< CPathMover > m_hMover; // 0x508	
};

