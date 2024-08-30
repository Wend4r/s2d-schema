#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CMoverPathNode : public CPointEntity
{
public:
	Vector m_vInTangentLocal; // 0x4d8	
	Vector m_vOutTangentLocal; // 0x4e4	
	CUtlSymbolLarge m_szParentPathUniqueID; // 0x4f0	
	CEntityIOOutput m_OnPassThrough; // 0x4f8	
	CHandle< CPathMover > m_hMover; // 0x520	
};

