//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, NSArray, NSString;

@interface IDETestReportStateSaving : NSObject
{
    NSString *_identifier;
    NSString *_fileName;
    DVTFilePath *_storagePath;
}

@property(copy, nonatomic) DVTFilePath *storagePath; // @synthesize storagePath=_storagePath;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *cachedPaths;
- (void)purgePath:(id)arg1;
- (void)stashPath:(id)arg1;
- (id)indexPathFromString:(id)arg1;
- (id)cachedSelectedItemPath;
- (void)stashSelectedItemPath:(id)arg1;
- (id)userDefaultsKey;
- (id)cacheFilePath;
- (id)key;
- (id)fileNameWithExtension;
- (void)createStoragePath;
- (id)initWithIdentifier:(id)arg1 fileName:(id)arg2;

@end

