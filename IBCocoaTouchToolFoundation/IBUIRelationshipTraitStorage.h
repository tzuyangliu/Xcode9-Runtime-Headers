//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUITraitStorage.h>

@class NSOrderedSet;

@interface IBUIRelationshipTraitStorage : IBUITraitStorage
{
    NSOrderedSet *_relationshipCandidateIDs;
}

@property(readonly, copy, nonatomic) NSOrderedSet *relationshipCandidateIDs; // @synthesize relationshipCandidateIDs=_relationshipCandidateIDs;
- (void).cxx_destruct;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)addObjectIDs:(id)arg1 andRemoveObjectIDs:(id)arg2 forTraits:(id)arg3;
- (void)addCandidateIDs:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithObjectID:(id)arg1 keyPath:(id)arg2 relationshipCandidateIDs:(id)arg3;

@end
