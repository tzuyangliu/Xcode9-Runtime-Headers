//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (IBFileManagerAdditions)
- (id)ib_directoriesAtPath:(id)arg1 error:(id *)arg2;
- (id)ib_filesAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)ib_overwriteFileAtPath:(id)arg1 withLinkToFileAtPath:(id)arg2 error:(id *)arg3;
- (BOOL)ib_overwriteFileAtPath:(id)arg1 withFileAtPath:(id)arg2 error:(id *)arg3;
- (BOOL)ib_removeFileAtPathIfExists:(id)arg1 error:(id *)arg2;
- (BOOL)pathIsFile:(id)arg1;
- (BOOL)ib_pathIsDirectory:(id)arg1;
@end

