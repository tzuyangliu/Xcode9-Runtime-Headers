//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEBatchFindPlistCodable-Protocol.h>
#import <IDEFoundation/NSCopying-Protocol.h>

@class IDEBatchFindFilePathPredicate, IDEBatchFindFileSource, NSString;

@interface IDEBatchFindNamedScope : NSObject <NSCopying, IDEBatchFindPlistCodable>
{
}

+ (id)plistDecoder;
+ (id)propertyListIdentifier;
+ (id)titleForNamedScope:(id)arg1 inWorkspace:(id)arg2;
+ (id)decodeFromPropertyListRepresentation:(id)arg1;
- (id)description;
- (id)propertyListRepresentation;
- (BOOL)isWorkspaceSpecific;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNamedScope:(id)arg1;
- (BOOL)isEqualToNamedScopeWithIdenticalClass:(id)arg1;
- (unsigned long long)hash;
@property(readonly) IDEBatchFindFilePathPredicate *predicate;
@property(readonly) IDEBatchFindFileSource *source;
@property(readonly) NSString *name;

@end

