//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEContainerItem.h>

#import <IDEKit/IDEStructureEditingTarget-Protocol.h>

@class NSString;

@interface IDEContainerItem (IDEKit_StructureEditing) <IDEStructureEditingTarget>
- (id)structureEditingRemoveSubitemsTargetForParentNavigableItem:(id)arg1;
- (id)structureEditingGroupingTargetForProposedNavigableItem:(id)arg1 proposedChildIndex:(long long)arg2 createDirectory:(BOOL)arg3 inWorkspace:(id)arg4;
- (id)structureEditingTargetForProposedNavigableItem:(id)arg1 proposedChildIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

