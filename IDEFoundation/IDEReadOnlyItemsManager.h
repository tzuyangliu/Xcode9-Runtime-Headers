//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEReadOnlyItemsManager : NSObject
{
}

+ (id)readOnlyItemsManagerAspect;
+ (id)localizedRecoveryMessageForFailedUnlockingAttemptWithStatus:(int)arg1;
+ (id)localizedDescriptionForReadOnlyStatus:(int)arg1 itemName:(id)arg2 pluralized:(BOOL)arg3;
+ (BOOL)shouldShowLockedIndicatorForStatus:(int)arg1;
+ (BOOL)tryToMakeFilePathWritable:(id)arg1 error:(id *)arg2;
+ (BOOL)_addUserWritePermissionToFilePath:(id)arg1 error:(id *)arg2;
+ (int)readOnlyStatusOfFilePath:(id)arg1;

@end
