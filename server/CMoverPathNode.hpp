#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x580
// Has VTable
class CMoverPathNode : public CPointEntity
{
public:
	Vector m_vInTangentLocal; // 0x4e0	
	Vector m_vOutTangentLocal; // 0x4ec	
	CUtlSymbolLarge m_szParentPathUniqueID; // 0x4f8	
	CEntityIOOutput m_OnPassThrough; // 0x500	
	CEntityIOOutput m_OnPassThroughForward; // 0x528	
	CEntityIOOutput m_OnPassThroughReverse; // 0x550	
	CHandle< CPathMover > m_hMover; // 0x578	
};

