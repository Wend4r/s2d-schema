#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'pulsedoc_lib')
// Alignment: 8
// Size: 0x200
// 
// MGetKV3ClassDefaults
class CPulseEditorSettings
{
public:
	Color m_colCanvasBackground; // 0x0	
	Color m_colCanvasBackgroundWhenDebugging; // 0x4	
	// MPropertyStartGroup "+Grid"
	float m_flGridSnapV2; // 0x8	
	bool m_bSnapAbsToGrid; // 0xc	
	bool m_bSnapSizeToGrid; // 0xd	
	bool m_bGridMinorPoints; // 0xe	
private:
	[[maybe_unused]] uint8_t __pad000f[0x1]; // 0xf
public:
	float m_flGridMinorSpacingV2; // 0x10	
	float m_flSuppressMinorGridFurtherThan; // 0x14	
	Color m_colGridMinorColor; // 0x18	
	float m_flGridMinorWidth; // 0x1c	
	// MPropertyAttributeRange "1 25"
	int32_t m_nGridMajorMultiple; // 0x20	
	Color m_colGridMajorColor; // 0x24	
	float m_flGridMajorWidth; // 0x28	
	Color m_colGridOriginColor; // 0x2c	
	float m_flGridOriginWidth; // 0x30	
	// MPropertyStartGroup "+Ports"
	// MPropertyAttributeRange "0 32"
	float m_nFlowTooltipBoxMargin; // 0x34	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontSequencePoint; // 0x38	
	// MPropertyAttributeRange "0 32"
	float m_flSequencePointRadius; // 0x40	
	// MPropertyAttributeRange "0 32"
	float m_flSequencePointLinkWidth; // 0x44	
	// MPropertyColorPlusAlpha
	Color m_colSequencePointFadeOverlay; // 0x48	
	Color m_colSequencePointSpontaneous; // 0x4c	
	Color m_colSequencePointYield; // 0x50	
	Color m_colSequencePoint; // 0x54	
	Color m_colSequencePointLink; // 0x58	
	Color m_colSequencePointLinkYield; // 0x5c	
	Color m_colSequencePointName; // 0x60	
	Color m_colFlowTooltipBorder; // 0x64	
	Color m_colFlowTooltipBackground; // 0x68	
	Color m_colFlowTooltipForeground; // 0x6c	
	CUtlString m_SetValueIconImg; // 0x70	
	CUtlString m_GetValueIconImg; // 0x78	
	// MPropertyAttributeRange "-1 128"
	float m_flPortDragOffCreateThreshold; // 0x80	
	// MPropertyStartGroup "+Types"
	Color m_colBool; // 0x84	
	Color m_colNumber; // 0x88	
	Color m_colString; // 0x8c	
	Color m_colOther; // 0x90	
	Color m_colCursorFlow; // 0x94	
	// MPropertyStartGroup "+Fonts"
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontFlowTooltip; // 0x98	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontLiteral; // 0xa0	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontDomainName; // 0xa8	
	Vector2D m_vDomainNameOffsetPX; // 0xb0	
	Color m_colDomainName; // 0xb8	
	Color m_colDomainNameWhenDebugging; // 0xbc	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontParentAssets; // 0xc0	
	Color m_colParentAssets; // 0xc8	
	// MPropertyStartGroup "+Literals"
	// MPropertyAttributeRange "0 32"
	float m_flLiteralLabelSpacing; // 0xcc	
	// MPropertyStartGroup "+Debugger"
	Color m_colDebuggerBrokenBorder; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d4[0x4]; // 0xd4
public:
	CUtlString m_DebuggerBrokenImg; // 0xd8	
	CUtlString m_DebuggerBrokenOtherImg; // 0xe0	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBrokenMarkerOffset; // 0xe8	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBrokenMarkerSize; // 0xec	
	CUtlString m_DebuggerBreakpointImg; // 0xf0	
	CUtlString m_DebuggerBreakpointDisabledImg; // 0xf8	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBreakpointOffset; // 0x100	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBreakpointSize; // 0x104	
	// MPropertyAttributeRange "0 32"
	float m_flYieldedCursorStackOffset; // 0x108	
private:
	[[maybe_unused]] uint8_t __pad010c[0x4]; // 0x10c
public:
	CUtlString m_GraphInstanceImg; // 0x110	
	// MPropertyAttributeRange "0 32"
	float m_flRecentExecTimeoutSec; // 0x118	
	// MPropertyAttributeRange "0 32"
	float m_flRecentExecStartOffset; // 0x11c	
	// MPropertyAttributeRange "0 64"
	float m_flRecentExecEndOffset; // 0x120	
	// MPropertyAttributeRange "0 8"
	float m_flRecentExecLineWidth; // 0x124	
	// MPropertyColorPlusAlpha
	Color m_colRecentExecStartColor; // 0x128	
	// MPropertyColorPlusAlpha
	Color m_colRecentExecEndColor; // 0x12c	
	// MPropertyColorPlusAlpha
	Color m_colRecentExecRequirementFailStartColor; // 0x130	
	// MPropertyColorPlusAlpha
	Color m_colRecentExecRequirementFailEndColor; // 0x134	
	// MPropertyAttributeRange "0 32"
	float m_flRecentExecConnectionIndicatorSize; // 0x138	
private:
	[[maybe_unused]] uint8_t __pad013c[0x4]; // 0x13c
public:
	CUtlString m_RecentExecConnectionIndicatorImg; // 0x140	
	bool m_bBreakOnExceptions; // 0x148	
	bool m_bShowExecutionHistory; // 0x149	
	bool m_bBoxSelectRequiresFullyContained; // 0x14a	
private:
	[[maybe_unused]] uint8_t __pad014b[0x1]; // 0x14b
public:
	// MPropertyStartGroup "+Group Layout"
	float m_flFlowMinWidth; // 0x14c	
	Color m_colSelectedBorder; // 0x150	
	// MPropertyAttributeRange "0 64"
	float m_flAppendButtonSize; // 0x154	
	Color m_colAppendHover; // 0x158	
private:
	[[maybe_unused]] uint8_t __pad015c[0x4]; // 0x15c
public:
	CUtlString m_AppendImg; // 0x160	
	// MPropertyAttributeRange "0 32"
	float m_flMoveChildArrowOffset; // 0x168	
	// MPropertyAttributeRange "0 32"
	float m_flMoveChildArrowSize; // 0x16c	
	CUtlString m_MoveChildArrowImg; // 0x170	
	Color m_colMoveChildArrow; // 0x178	
	// MPropertyStartGroup "+Connections"
	// MPropertyAttributeRange "0 500"
	float m_flConnectionTangentStrength; // 0x17c	
	// MPropertyAttributeRange "1 50"
	float m_flConnectionCurveSpacing; // 0x180	
	// MPropertyAttributeRange "0 2"
	float m_flConnectionDeltaLimitScale; // 0x184	
	bool m_bLimitByDelta; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad0189[0x3]; // 0x189
public:
	// MPropertyAttributeRange "0 32"
	float m_flBrokenConnectionOffset; // 0x18c	
	// MPropertyAttributeRange "0 32"
	float m_flConnectionInflowOffset; // 0x190	
	// MPropertyAttributeRange "0 32"
	float m_flConnectionInparamOffset; // 0x194	
	// MPropertyAttributeRange "0 32"
	float m_flConnectionCapBrokenSize; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0x4]; // 0x19c
public:
	CUtlString m_ConnectionCapBrokenImg; // 0x1a0	
	// MPropertyAttributeRange "0 1"
	float m_flConnectionColorLerpPercentageStart; // 0x1a8	
	// MPropertyStartGroup "+Notes"
	Vector2D m_vecBlockCommentDefaultSize; // 0x1ac	
	Vector2D m_vecBlockCommentMinSize; // 0x1b4	
	Color m_colBlockCommentDefault; // 0x1bc	
	Color m_colBlockCommentTextLight; // 0x1c0	
	Color m_colBlockCommentTextDark; // 0x1c4	
	float m_flBlockCommentRegionAlpha; // 0x1c8	
	// MPropertyStartGroup "+Timelines"
	float m_flTimelineSeekBarHeight; // 0x1cc	
	float m_flTimelinePauseIconSize; // 0x1d0	
	float m_flTimelineCallModeIconSize; // 0x1d4	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontTimelineTime; // 0x1d8	
	Color m_colTimelineLabel; // 0x1e0	
	Vector2D m_vecTimelineIconFromPort; // 0x1e4	
	Vector2D m_vecTimelinePauseIconOffset; // 0x1ec	
	float m_flTimelineCursorHeight; // 0x1f4	
	float m_flTimelineCursorTextHeight; // 0x1f8	
};

