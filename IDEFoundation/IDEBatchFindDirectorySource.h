//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindFileSource.h>

@class DVTFilePath, NSString;

@interface IDEBatchFindDirectorySource : IDEBatchFindFileSource
{
    NSString *_basePathString;
    DVTFilePath *_basePath;
}

+ (id)decodeFromPropertyListRepresentation:(id)arg1;
+ (id)propertyListIdentifier;
@property(readonly) DVTFilePath *basePath; // @synthesize basePath=_basePath;
@property(readonly) NSString *basePathString; // @synthesize basePathString=_basePathString;
- (void).cxx_destruct;
- (void)accessContentGroupsWithWorkspace:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accumulateContributingSources:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToFileSourceWithIdenticalClass:(id)arg1;
- (id)propertyListRepresentation;
- (id)initWithPathString:(id)arg1;

@end

