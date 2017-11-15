//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTModelTree.h>

@class IDESourceControlExtension, IDESourceControlManager, IDESourceControlTreeGroup, NSString;

@interface IDESourceControlTree : DVTModelTree
{
    IDESourceControlManager *_sourceControlManager;
    IDESourceControlExtension *_sourceControlExtension;
    NSString *_location;
    NSString *_name;
    BOOL _disallowLoadingChildren;
    NSString *_identifier;
    NSString *_cachedFirstRevision;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
+ (id)treeLoadingModelObjectGraph;
@property(copy) NSString *cachedFirstRevision; // @synthesize cachedFirstRevision=_cachedFirstRevision;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property BOOL disallowLoadingChildren; // @synthesize disallowLoadingChildren=_disallowLoadingChildren;
@property(copy) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) IDESourceControlExtension *sourceControlExtension; // @synthesize sourceControlExtension=_sourceControlExtension;
@property(readonly) IDESourceControlManager *sourceControlManager; // @synthesize sourceControlManager=_sourceControlManager;
- (void).cxx_destruct;
- (id)copyRepository;
- (id)description;
- (void)setSourceControlExtension:(id)arg1 updateUserDefaults:(BOOL)arg2;
- (void)setName:(id)arg1 updateUserDefaults:(BOOL)arg2;
- (id)subclass_createRootNode;
- (void)primitiveInvalidate;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 sourceControlExtension:(id)arg2 sourceControlManager:(id)arg3;
- (id)initWithLocation:(id)arg1 sourceControlManager:(id)arg2;

// Remaining properties
@property(readonly) IDESourceControlTreeGroup *rootGroup; // @dynamic rootGroup;

@end

