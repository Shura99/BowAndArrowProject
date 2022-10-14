#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class USkeletalMeshComponent;
class USphereComponent;
class UMotionControllerComponent;
class UCameraComponent;
class ABP_Bow_C__pf1010915279;
#include "FirstPersonCharacter__pf205484891.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C", OverrideNativeName="FirstPersonCharacter_C"))
class AFirstPersonCharacter_C__pf205484891 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="VR_Gun"))
	USkeletalMeshComponent* bpv__VR_Gun__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="VR_Marker"))
	USphereComponent* bpv__VR_Marker__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="R_MotionController"))
	UMotionControllerComponent* bpv__R_MotionController__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="L_MotionController"))
	UMotionControllerComponent* bpv__L_MotionController__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere"))
	USphereComponent* bpv__Sphere__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="MyCharacter", OverrideNativeName="FirstPersonCamera"))
	UCameraComponent* bpv__FirstPersonCamera__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Gun Offset", Category="Default", Tooltip="Gun offset from the camera location", OverrideNativeName="GunOffset"))
	FVector bpv__GunOffset__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Base Turn Rate", Category="Default", OverrideNativeName="BaseTurnRate"))
	float bpv__BaseTurnRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Base Look Up Rate", Category="Default", OverrideNativeName="BaseLookUpRate"))
	float bpv__BaseLookUpRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Using Motion Controllers?", Category="Default", OverrideNativeName="UsingMotionControllers?"))
	bool bpv__UsingMotionControllersx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Finger Index", Category="Default", MultiLine="true", OverrideNativeName="FingerIndex"))
	TEnumAsByte<ETouchIndex::Type> bpv__FingerIndex__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bow", Category="Default", MultiLine="true", OverrideNativeName="Bow"))
	ABP_Bow_C__pf1010915279* bpv__Bow__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Num Arrows", Category="Default", MultiLine="true", OverrideNativeName="NumArrows"))
	int32 bpv__NumArrows__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Walk Speed", Category="Default", MultiLine="true", OverrideNativeName="WalkSpeed"))
	float bpv__WalkSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sprint Speed", Category="Default", MultiLine="true", OverrideNativeName="SprintSpeed"))
	float bpv__SprintSpeed__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_4"))
	FKey b0l__K2Node_InputActionEvent_Key_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_3"))
	FKey b0l__K2Node_InputActionEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b0l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b0l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_1"))
	FKey b0l__Temp_struct_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_5"))
	float b0l__K2Node_InputAxisEvent_AxisValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_4"))
	float b0l__K2Node_InputAxisEvent_AxisValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_3"))
	float b0l__K2Node_InputAxisEvent_AxisValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_2"))
	float b0l__K2Node_InputAxisEvent_AxisValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_5"))
	FKey b0l__K2Node_InputActionEvent_Key_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_1"))
	bool b0l__Temp_bool_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_1"))
	float b0l__K2Node_InputAxisEvent_AxisValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	FVector b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default_1"))
	FVector b0l__K2Node_Select_Default_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorRelativeLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Hit"))
	FHitResult b0l__K2Node_Event_Hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_6"))
	FKey b0l__K2Node_InputActionEvent_Key_6__pf;
	AFirstPersonCharacter_C__pf205484891(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_FirstPersonCharacter_2"))
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonCharacter__pf_13(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/**\t * Called upon landing when falling, to perform actions based on the Hit result.\t * Note that movement mode is still \"Falling\" during this event. Current Velocity value is the velocity at the time of landing.\t * Consider OnMovementModeChanged() as well, as that can be used once the movement mode changes to the new mode (most likely Walking).\t *\t * @param Hit Result describing the landing that resulted in a valid landing spot.\t * @see OnMovementModeChanged()\t */", ToolTip="Called upon landing when falling, to perform actions based on the Hit result.Note that movement mode is still \"Falling\" during this event. Current Velocity value is the velocity at the time of landing.Consider OnMovementModeChanged() as well, as that can be used once the movement mode changes to the new mode (most likely Walking).@param Hit Result describing the landing that resulted in a valid landing spot.@see OnMovementModeChanged()", CppFromBpEvent, OverrideNativeName="OnLanded"))
	virtual void bpf__OnLanded__pf(FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62"))
	virtual void bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34"))
	virtual void bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192"))
	virtual void bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181"))
	virtual void bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUp_K2Node_InputAxisEvent_172"))
	virtual void bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Turn_K2Node_InputAxisEvent_157"))
	virtual void bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Sprint_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_Sprint_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Sprint_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_Sprint_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Fire_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_Fire_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Charge_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_Charge_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Charge_K2Node_InputActionEvent_4"))
	virtual void bpf__InpActEvt_Charge_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ResetVR_K2Node_InputActionEvent_5"))
	virtual void bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Jump_K2Node_InputActionEvent_6"))
	virtual void bpf__InpActEvt_Jump_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Reload_Bow", Category, OverrideNativeName="ReloadBow"))
	virtual void bpf__ReloadBow__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddArrows"))
	virtual void bpf__AddArrows__pf(int32 bpp__Number__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StartSprint"))
	virtual void bpf__StartSprint__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StopSprint"))
	virtual void bpf__StopSprint__pf();
public:
};
