#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Swiftlet

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct Swiftlet.SwiftletDataConfig
// 0x0050 (0x0050 - 0x0000)
struct FSwiftletDataConfig final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Name;                                              // 0x0010(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Category;                                          // 0x0020(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Usage;                                             // 0x0030(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Logic;                                             // 0x0038(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Collect;                                           // 0x0048(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
//static_assert(alignof(FSwiftletDataConfig) == 0x000008, "Wrong alignment on FSwiftletDataConfig");
//static_assert(sizeof(FSwiftletDataConfig) == 0x000050, "Wrong size on FSwiftletDataConfig");
//static_assert(offsetof(FSwiftletDataConfig, Key) == 0x000000, "Member 'FSwiftletDataConfig::Key' has a wrong offset!");
//static_assert(offsetof(FSwiftletDataConfig, Name) == 0x000010, "Member 'FSwiftletDataConfig::Name' has a wrong offset!");
//static_assert(offsetof(FSwiftletDataConfig, Category) == 0x000020, "Member 'FSwiftletDataConfig::Category' has a wrong offset!");
//static_assert(offsetof(FSwiftletDataConfig, Usage) == 0x000030, "Member 'FSwiftletDataConfig::Usage' has a wrong offset!");
//static_assert(offsetof(FSwiftletDataConfig, Logic) == 0x000038, "Member 'FSwiftletDataConfig::Logic' has a wrong offset!");
//static_assert(offsetof(FSwiftletDataConfig, Collect) == 0x000048, "Member 'FSwiftletDataConfig::Collect' has a wrong offset!");

// ScriptStruct Swiftlet.CommonConst
// 0x0070 (0x0070 - 0x0000)
struct FCommonConst final
{
public:
	class FString                                 Project;                                           // 0x0000(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ProjectToken;                                      // 0x0010(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UploadImageUrl;                                    // 0x0020(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UploadFileUrl;                                     // 0x0030(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PostIssueUrl;                                      // 0x0040(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PopoMsgUrl;                                        // 0x0050(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PopoGroupId;                                       // 0x0060(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
//static_assert(alignof(FCommonConst) == 0x000008, "Wrong alignment on FCommonConst");
//static_assert(sizeof(FCommonConst) == 0x000070, "Wrong size on FCommonConst");
//static_assert(offsetof(FCommonConst, Project) == 0x000000, "Member 'FCommonConst::Project' has a wrong offset!");
//static_assert(offsetof(FCommonConst, ProjectToken) == 0x000010, "Member 'FCommonConst::ProjectToken' has a wrong offset!");
//static_assert(offsetof(FCommonConst, UploadImageUrl) == 0x000020, "Member 'FCommonConst::UploadImageUrl' has a wrong offset!");
//static_assert(offsetof(FCommonConst, UploadFileUrl) == 0x000030, "Member 'FCommonConst::UploadFileUrl' has a wrong offset!");
//static_assert(offsetof(FCommonConst, PostIssueUrl) == 0x000040, "Member 'FCommonConst::PostIssueUrl' has a wrong offset!");
//static_assert(offsetof(FCommonConst, PopoMsgUrl) == 0x000050, "Member 'FCommonConst::PopoMsgUrl' has a wrong offset!");
//static_assert(offsetof(FCommonConst, PopoGroupId) == 0x000060, "Member 'FCommonConst::PopoGroupId' has a wrong offset!");

}

