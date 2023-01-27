
#include "ConsoleVariables.h"

// ===== MOVEMENT =====

static TAutoConsoleVariable<float> CVarMVBounce180Threshold(
	TEXT("mv.Bounce.180Threshold"),
	25.0f,
	TEXT("Angle between the obstacle normal and player velocity vector must not exceed this value for 180 to be perfomed."),
	ECVF_Default
);

static TAutoConsoleVariable<float> CVarMVBounceQuickturnThreshold(
	TEXT("mv.Bounce.QuickturnThreshold"),
	35.0f,
	TEXT("Angle between the obstacle normal and player view angle must not exceed this value for quickturn to be performed."),
	ECVF_Default
);

// CHEAT
static TAutoConsoleVariable<float> CVarMVBounceBoostThreshold(
	TEXT("mv.Bounce.BoostThreshold"),
	-100.0f,
	TEXT("Player is boosted if velocity Z is above this value."),
	ECVF_Default
);

// CHEAT
static TAutoConsoleVariable<float> CVarMVBounceBoostMultiplier(
	TEXT("mv.Bounce.BoostMultiplier"),
	1.75f,
	TEXT("Boost velocity is multiplied by this value and player is boosted using the result."),
	ECVF_Default
);

static TAutoConsoleVariable<float> CVarMVQuickturnInterpSpeed(
	TEXT("mv.Quickturn.InterpSpeed"),
	15.0f,
	TEXT("How fast should the quickturn interpolation be."),
	ECVF_Default
);

// CHEAT
static TAutoConsoleVariable<float> CVarMVSlideBoostMultiplier(
	TEXT("mv.Slide.BoostMultiplier"),
	1.25f,
	TEXT("Player velocity is multiplied by this value which results in final slide velocity."),
	ECVF_Default
);

// CHEAT
static TAutoConsoleVariable<float> CVarMVSlideDurationSeconds(
	TEXT("mv.Slide.DurationSeconds"),
	1.0f,
	TEXT("For how long should the player slide."),
	ECVF_Default
);

// CHEAT
static TAutoConsoleVariable<float> CVarMVClimbJumpOffSpeed(
	TEXT("mv.Climb.JumpOffSpeed"),
	500.0f,
	TEXT("How fast a player is thrusted off the ladder."),
	ECVF_Default
);

// ===== DEV =====

// CHEAT
static TAutoConsoleVariable<bool> CVarDEVToolsShowTriggers(
	TEXT("dev.Tools.ShowTriggers"),
	false,
	TEXT("Visualize all trigger boxes on the level."),
	ECVF_Default
);

static TAutoConsoleVariable<bool> CVarDEVBounceShowVelocityTrace(
	TEXT("dev.Bounce.ShowVelocityTrace"),
	false,
	TEXT("Visualize velocity traces which trigger actual bounces."),
	ECVF_Default
);
