//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEFindNavigatorAbstractScopeOutlineItem.h>

@interface IDEFindNavigatorGroupScopeOutlineItem : IDEFindNavigatorAbstractScopeOutlineItem
{
    BOOL _filterable;
}

- (id)filteredCloneWithChildren:(id)arg1 passedFilterLocally:(BOOL)arg2 descendantPassedFilter:(BOOL)arg3;
- (BOOL)isFilterable;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 predicate:(id)arg3 children:(id)arg4 passedFilterLocally:(BOOL)arg5 descendantPassedFilter:(BOOL)arg6 filterable:(BOOL)arg7;

@end
