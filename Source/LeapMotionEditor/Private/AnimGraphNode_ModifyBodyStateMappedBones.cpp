#include "AnimGraphNode_ModifyBodyStateMappedBones.h"

/////////////////////////////////////////////////////
// UAnimGraphNode_ModifyBSHand

UAnimGraphNode_ModifyBodyStateMappedBones::UAnimGraphNode_ModifyBodyStateMappedBones(const FObjectInitializer& Initializer)
	: Super(Initializer)
{
}

//Title Color!
FLinearColor UAnimGraphNode_ModifyBodyStateMappedBones::GetNodeTitleColor() const
{
	return FLinearColor(12, 12, 0, 1);
}

//Node Category
FString UAnimGraphNode_ModifyBodyStateMappedBones::GetNodeCategory() const
{
	return FString("Body State Animation");
}
FText UAnimGraphNode_ModifyBodyStateMappedBones::GetControllerDescription() const
{
	return FText::FromString("Modify Mapped Bones (Body State)");
}

FText UAnimGraphNode_ModifyBodyStateMappedBones::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	FText Result = GetControllerDescription();
	//FString Result += (TitleType == ENodeTitleType::ListView) ? TEXT("") : TEXT("\n");
	return Result;
}