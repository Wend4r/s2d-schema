#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Direct Playback"
class CAnimGraphDoc_DirectPlaybackNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Finish Early"
	bool m_bFinishEarly; // 0x48	
	// MPropertyFriendlyName "Reset Child On Finish"
	bool m_bResetOnFinish; // 0x49	
};

