//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEFolderRootGroup.h>

@interface _IDEPlaygroundCommonRootGroup : IDEFolderRootGroup
{
}

- (BOOL)canStructureEditRemoveSubitemsAtIndexes:(id)arg1;
- (id)_indexesOfSubitemsThatExistAtIndexes:(id)arg1;
- (BOOL)canStructureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)allowedFileTypesOfChildItems;
- (BOOL)allowUserModificationOfSubitems;
- (id)computedSubitemsWithOldSubitems:(id)arg1;
- (BOOL)subitemsAreEditable;
- (BOOL)subitemsAreComputed;

@end

