//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEIndexDataSource.h>

@class IDEIndexImportSession, NSString;

@interface IDEIndexTestPlistDataSource : IDEIndexDataSource
{
    IDEIndexImportSession *_session;
    NSString *_target;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_processFile:(id)arg1 newFiles:(id)arg2;
- (id)_newFilesForDictionaries:(id)arg1;
- (void)_processSymbol:(id)arg1 inFile:(id)arg2 container:(id)arg3 containerName:(id)arg4;
- (BOOL)generateDataForJob:(id)arg1;
- (void)generateDataForPlist:(id)arg1;
- (id)initWithSession:(id)arg1 target:(id)arg2;

@end

