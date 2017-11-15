//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceKitSymbol.h>

#import <IDEKit/DVTTextCompletionItem-Protocol.h>

@class NSArray, NSAttributedString, NSImage, NSString;

@interface IDESourceKitSymbol (IDEKitExtensions) <DVTTextCompletionItem>
- (void)infoViewControllerWithWidth:(double)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) BOOL notRecommended;
@property double fuzzyMatchingScore;
@property double priority;
@property(readonly) unsigned long long priorityComparatorKind;
@property(readonly) long long priorityBucket;
@property(readonly) NSImage *largeIcon;
@property(readonly) NSImage *icon;
@property(readonly, copy) NSAttributedString *descriptionText;
@property(readonly, copy) NSString *parentText;
@property(readonly, copy) NSString *displayType;
@property(readonly, copy) NSString *completionText;
@property(readonly, copy) NSString *displayText;

// Remaining properties
@property(readonly, copy) NSString *action;
@property(readonly, copy) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly, copy) NSString *name;
@property(readonly) NSImage *statusIcon;
@property(readonly) Class superclass;
@end

