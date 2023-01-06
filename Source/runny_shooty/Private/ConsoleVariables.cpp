
#include "ConsoleVariables.h"

static TAutoConsoleVariable<float> CVarMVBounce180Threshold(
	TEXT("mv.Bounce.180Threshold"),
	25.0f,
	TEXT("Angle between the obstacle normal and player velocity vector must not exceed this value for 180 to be perfomed."),
	ECVF_Default
);

static TAutoConsoleVariable<float> CVarMVBounceQuickturnThreshold(
	TEXT("mv.Bounce.QuickturnThreshold"),
	90.0f,
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
	0.75f,
	TEXT("Base jump velocity is multiplied by this value and player is boosted using the result."),
	ECVF_Default
);

static TAutoConsoleVariable<float> CVarMVQuickturnInterpSpeed(
	TEXT("mv.Quickturn.InterpSpeed"),
	15.0f,
	TEXT("How fast should the quickturn interpolation be."),
	ECVF_Default
);
