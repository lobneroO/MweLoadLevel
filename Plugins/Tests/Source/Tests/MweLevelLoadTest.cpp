#pragma once

#include "Tests/AutomationCommon.h"
#include "Misc/AutomationTest.h"
#include "Engine.h"

BEGIN_DEFINE_SPEC(FMweLoadLevelTest, "Mwe", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)

END_DEFINE_SPEC(FMweLoadLevelTest)

void FMweLoadLevelTest::Define()
{
	It("1 Load Level", EAsyncExecution::TaskGraphMainThread, FTimespan(0, 30, 0), [this](const FDoneDelegate& Done)
	{
		FString levelPath = FString("") / "Game" / "L1";
		AutomationOpenMap(levelPath);
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, "Level Loaded!");
	});

	It("2 Do something else", EAsyncExecution::Thread, FTimespan(0, 30, 0), [this]()
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, "Did it work?");
	});
}