#include "ABBaseballPlayerState.h"
#include "Net/UnrealNetwork.h"

AABBaseballPlayerState::AABBaseballPlayerState()
{
    MaxAttempts = 3;
    CurrentAttempts = 0;
    bReplicates = true;
}

void AABBaseballPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AABBaseballPlayerState, CurrentAttempts);
    DOREPLIFETIME(AABBaseballPlayerState, MaxAttempts);
}

void AABBaseballPlayerState::IncrementAttempts()
{
    if (HasAuthority())
    {
        CurrentAttempts++;
    }
}

void AABBaseballPlayerState::ResetPlayerState()
{
    if (HasAuthority())
    {
        CurrentAttempts = 0;
    }
}

FString AABBaseballPlayerState::GetAttemptsStatusString() const
{
    return FString::Printf(TEXT("[%d / %d]"), CurrentAttempts, MaxAttempts);
}

void AABBaseballPlayerState::OnRep_CurrentAttempts()
{
    // 데이터 변경 감지 시 클라이언트 단에서 실행될 영역
}