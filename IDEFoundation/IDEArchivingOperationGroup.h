//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTOperationGroup.h>

@class IDEArchivingOperation, IDEBuildOperationGroup;

@interface IDEArchivingOperationGroup : DVTOperationGroup
{
    IDEArchivingOperation *_archivingOperation;
    IDEBuildOperationGroup *_buildForArchiveOperation;
}

+ (id)operationGroupWithSuboperations:(id)arg1;
+ (id)operationGroupWithArchivingOperation:(id)arg1 otherOperations:(id)arg2;
@property(retain) IDEBuildOperationGroup *buildForArchiveOperation; // @synthesize buildForArchiveOperation=_buildForArchiveOperation;
@property(readonly) IDEArchivingOperation *archivingOperation; // @synthesize archivingOperation=_archivingOperation;
- (void).cxx_destruct;

@end

