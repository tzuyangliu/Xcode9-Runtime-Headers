//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindFileSource.h>

@class NSArray;

@interface IDEBatchFindUnionSource : IDEBatchFindFileSource
{
    NSArray *_sources;
}

+ (id)decodeFromPropertyListRepresentation:(id)arg1;
+ (id)propertyListIdentifier;
@property(readonly) NSArray *sources; // @synthesize sources=_sources;
- (void).cxx_destruct;
- (void)accumulateContributingSources:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToFileSourceWithIdenticalClass:(id)arg1;
- (id)propertyListRepresentation;
- (id)initWithSources:(id)arg1;

@end
