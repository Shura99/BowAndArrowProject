#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USkeletalMeshComponent;
class USceneComponent;
class UTimelineComponent;
class ABP_Arrow_C__pf1010915279;
#include "BP_Bow__pf1010915279.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/BP_Bow.BP_Bow_C", OverrideNativeName="BP_Bow_C"))
class ABP_Bow_C__pf1010915279 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BowMesh"))
	USkeletalMeshComponent* bpv__BowMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(meta=(OverrideNativeName="Charge_Timeline_0_ChargeAmount_144F41C24A7AF477A4E8DB81729FB78A"))
	float bpv__Charge_Timeline_0_ChargeAmount_144F41C24A7AF477A4E8DB81729FB78A__pf;
	UPROPERTY(meta=(OverrideNativeName="Charge_Timeline_0__Direction_144F41C24A7AF477A4E8DB81729FB78A"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Charge_Timeline_0__Direction_144F41C24A7AF477A4E8DB81729FB78A__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BP_Bow", OverrideNativeName="Charge_Timeline_0"))
	UTimelineComponent* bpv__Charge_Timeline_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Arrow", Category="Default", MultiLine="true", OverrideNativeName="Arrow"))
	ABP_Arrow_C__pf1010915279* bpv__Arrow__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Charge Amount", Category="Default", MultiLine="true", OverrideNativeName="ChargeAmount"))
	float bpv__ChargeAmount__pf;
	ABP_Bow_C__pf1010915279(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Bow__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Bow__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Bow__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Bow__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Bow__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Bow__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Bow__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Reload"))
	virtual void bpf__Reload__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EndCharge"))
	virtual void bpf__EndCharge__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StopCharge"))
	virtual void bpf__StopCharge__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Fire"))
	virtual void bpf__Fire__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="BeginChrge"))
	virtual void bpf__BeginChrge__pf();
	UFUNCTION(meta=(OverrideNativeName="Charge_Timeline_0__UpdateFunc"))
	virtual void bpf__Charge_Timeline_0__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Charge_Timeline_0__FinishedFunc"))
	virtual void bpf__Charge_Timeline_0__FinishedFunc__pf();
public:
};
