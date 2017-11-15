//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/DVTXMLUnarchiving-Protocol.h>
#import <IDEFoundation/NSCopying-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEBreakpointBucket, NSArray, NSMapTable, NSMutableArray, NSSet, NSString;
@protocol IDEBreakpointDelegate;

@interface IDEBreakpoint : NSObject <DVTXMLUnarchiving, NSCopying, DVTInvalidation>
{
    NSMutableArray *_actions;
    NSMutableArray *_locations;
    NSMapTable *_actionsToSetsOfObservers;
    DVTObservingToken *_actionsExpressionsObserverToken;
    BOOL _shouldBeEnabled;
    BOOL _continueAfterRunningActions;
    BOOL _textInFilterableTextFieldModified;
    int _breakpointStackSelectionBehavior;
    NSString *_displayName;
    IDEBreakpointBucket *_bucket;
    id <IDEBreakpointDelegate> _delegate;
    unsigned long long _ignoreCount;
    unsigned long long _hitCount;
    NSString *_condition;
    NSString *_customStopReasonString;
    NSSet *_actionClassesToIgnoreAsModified;
}

+ (id)keyPathsForValuesAffectingModifiedDescription;
+ (id)keyPathsForValuesAffectingModified;
+ (id)propertiesAffectingPersistenceState;
+ (BOOL)supportsInvalidationPrevention;
+ (void)initialize;
@property(readonly) NSSet *actionClassesToIgnoreAsModified; // @synthesize actionClassesToIgnoreAsModified=_actionClassesToIgnoreAsModified;
@property(retain) NSString *customStopReasonString; // @synthesize customStopReasonString=_customStopReasonString;
@property int breakpointStackSelectionBehavior; // @synthesize breakpointStackSelectionBehavior=_breakpointStackSelectionBehavior;
@property BOOL textInFilterableTextFieldModified; // @synthesize textInFilterableTextFieldModified=_textInFilterableTextFieldModified;
@property BOOL continueAfterRunningActions; // @synthesize continueAfterRunningActions=_continueAfterRunningActions;
@property(copy, nonatomic) NSString *condition; // @synthesize condition=_condition;
@property unsigned long long hitCount; // @synthesize hitCount=_hitCount;
@property unsigned long long ignoreCount; // @synthesize ignoreCount=_ignoreCount;
@property(nonatomic) BOOL shouldBeEnabled; // @synthesize shouldBeEnabled=_shouldBeEnabled;
@property __weak id <IDEBreakpointDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDEBreakpointBucket *bucket; // @synthesize bucket=_bucket;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)addLocations:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addActions:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (id)_actionArchivingProxiesArray;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setBreakpointStackSelectionBehaviorFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setContinueAfterRunningActionsFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setConditionFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setShouldBeEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (BOOL)_booleanValueFromUTF8String:(char *)arg1;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)_handleActionsChanged:(id)arg1;
- (void)resetActionExpressionResults;
@property(readonly, nonatomic) NSString *accessibilityDescription;
@property(readonly, nonatomic) NSString *modifiedDescription;
@property(readonly, nonatomic) BOOL modified;
- (void)locationWasRemoved:(id)arg1;
- (void)_updateLocation:(id)arg1 fromLocation:(id)arg2;
- (void)_locationWasResolved:(id)arg1;
- (unsigned long long)_indexOfSimilarBreakpointLocationMatching:(id)arg1 inLocations:(id)arg2;
- (void)locationWasResolved:(id)arg1;
- (void)setInitialResolvedLocations:(id)arg1;
@property(readonly) BOOL locationsProvideAdditionalInformation;
- (void)toggleShouldBeEnabled;
- (void)_notifyPersistencyStateChanged;
- (void)primitiveSetBucket:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)_dvt_commonInit;

// Remaining properties
@property(copy) NSArray *actions; // @dynamic actions;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSArray *locations; // @dynamic locations;
@property(readonly) NSMutableArray *mutableActions; // @dynamic mutableActions;
@property(readonly) NSMutableArray *mutableLocations; // @dynamic mutableLocations;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

