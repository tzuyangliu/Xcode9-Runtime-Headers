//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigableItemCoordinator.h>

@class DVTNotificationToken, IDENavigableItemFilter;

@interface IDENavigableItemFilteringCoordinator : IDENavigableItemCoordinator
{
    DVTNotificationToken *_itemPropertyChangeObserver;
    DVTNotificationToken *_objectGraphChangeObserver;
    BOOL _isSuspended;
    BOOL _performingFiltering;
    IDENavigableItemFilter *_filter;
}

@property BOOL performingFiltering; // @synthesize performingFiltering=_performingFiltering;
@property(retain, nonatomic) IDENavigableItemFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (BOOL)_shouldDecendFilteringIntoChildrenOf:(id)arg1;
- (BOOL)_filterMatchesItem:(id)arg1;
- (id)_arrangeItems:(id)arg1 ofItem:(id)arg2;
- (id)_arrangedChildItemsOfItem:(id)arg1;
- (void)_handleObjectGraphDidChange:(id)arg1;
- (void)_handleItemsPropertiesDidChange:(id)arg1;
- (void)_handleObjectGraphDidChangeNotification:(id)arg1;
- (void)_handleItemsPropertiesDidChangeNotification:(id)arg1;
- (void)_filterDidChange;
- (void)resumeFiltering;
- (void)suspendFiltering;
- (void)primitiveInvalidate;
- (id)init;

@end

