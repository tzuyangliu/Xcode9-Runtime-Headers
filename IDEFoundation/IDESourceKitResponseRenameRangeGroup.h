//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceKitVariantDictionaryWrapper.h>

#import <IDEFoundation/IDESourceKitRenameRangeGroup-Protocol.h>

@class IDESourceKitResponseArray, NSArray;

@interface IDESourceKitResponseRenameRangeGroup : IDESourceKitVariantDictionaryWrapper <IDESourceKitRenameRangeGroup>
{
}

@property(readonly) IDESourceKitResponseArray *rawRanges;
@property(readonly) struct _sourcekit_uid_s *rawCategory;
@property(readonly) NSArray *ranges;
@property(readonly) unsigned long long category;

@end

