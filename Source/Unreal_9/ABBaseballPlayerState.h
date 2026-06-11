#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ABBaseballPlayerState.generated.h"

UCLASS()
class UNREAL_9_API AABBaseballPlayerState : public APlayerState
{
    GENERATED_BODY()

public:
    AABBaseballPlayerState();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    FORCEINLINE int32 GetCurrentAttempts() const { return CurrentAttempts; }
    FORCEINLINE int32 GetMaxAttempts() const { return MaxAttempts; }

    void IncrementAttempts();
    void ResetPlayerState();
    FString GetAttemptsStatusString() const;

protected:
    UPROPERTY(ReplicatedUsing = OnRep_CurrentAttempts)
    int32 CurrentAttempts;

    UPROPERTY(Replicated)
    int32 MaxAttempts;

    UFUNCTION()
    void OnRep_CurrentAttempts();
};