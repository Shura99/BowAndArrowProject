#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "EArrowState__pf1010915279.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class UProjectileMovementComponent;
class UPrimitiveComponent;
class AActor;
#include "BP_Arrow__pf1010915279.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/BP_Arrow.BP_Arrow_C", OverrideNativeName="BP_Arrow_C"))
class ABP_Arrow_C__pf1010915279 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ArrowMesh"))
	UStaticMeshComponent* bpv__ArrowMesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bow Charge", Category="Default", MultiLine="true", OverrideNativeName="BowCharge"))
	float bpv__BowCharge__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Arrow State", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="ArrowState"))
	E__EArrowState__pf bpv__ArrowState__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Projectile Component", Category="Default", MultiLine="true", OverrideNativeName="ProjectileComponent"))
	UProjectileMovementComponent* bpv__ProjectileComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Bow_Charge"))
	float b0l__K2Node_CustomEvent_Bow_Charge__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	ABP_Arrow_C__pf1010915279(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Arrow__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Arrow__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BP_Arrow_ArrowMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BP_Arrow_ArrowMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Fire"))
	virtual void bpf__Fire__pf(float bpp__BowxCharge__pfT);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Private", OverrideNativeName="SetArrowState"))
	virtual void bpf__SetArrowState__pf(E__EArrowState__pf bpp__NewState__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Private", OverrideNativeName="OnStateBegin"))
	virtual void bpf__OnStateBegin__pf(E__EArrowState__pf bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Private", OverrideNativeName="OnStateEnd"))
	virtual void bpf__OnStateEnd__pf(E__EArrowState__pf bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Private", OverrideNativeName="OverlapCollision"))
	virtual void bpf__OverlapCollision__pf(AActor* bpp__OtherActor__pf, FHitResult bpp__HitResult__pf);
public:
};
