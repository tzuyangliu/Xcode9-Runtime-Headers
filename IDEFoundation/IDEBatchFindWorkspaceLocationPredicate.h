//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindFilePathPredicate.h>

@class NSArray;

@interface IDEBatchFindWorkspaceLocationPredicate : IDEBatchFindFilePathPredicate
{
    NSArray *_pathComponents;
}

+ (id)propertyListIdentifier;
+ (id)decodeFromPropertyListRepresentation:(id)arg1;
+ (id)componentForGroupPathForContainerItem:(id)arg1;
@property(readonly) NSArray *pathComponents; // @synthesize pathComponents=_pathComponents;
- (void).cxx_destruct;
- (BOOL)isWorkspaceSpecific;
- (id)propertyListRepresentation;
- (CDUnknownBlockType)filterBoundToWorkspace:(id)arg1;
- (BOOL)isEqualToFilePathPredicateWithIdenticalClass:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPathComponents:(id)arg1;

@end

