#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CMoverPathNode : public CPointEntity
{
public:
	Vector m_vInTangentLocal; // 0x4b8	
	Vector m_vOutTangentLocal; // 0x4c4	
	CUtlSymbolLarge m_szParentPathUniqueID; // 0x4d0	
	CEntityIOOutput m_OnPassThrough; // 0x4d8	
	CHandle< CPathMover > m_hMover; // 0x500	
};

