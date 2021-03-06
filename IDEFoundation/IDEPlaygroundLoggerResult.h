//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDETimestampedPlaygroundResult.h>

@class DVTTextDocumentLocation, NSString;
@protocol IDEPlaygroundLoggerLogEntry;

@interface IDEPlaygroundLoggerResult : IDETimestampedPlaygroundResult
{
    DVTTextDocumentLocation *_location;
    NSString *_sourceText;
    NSString *_fullLineSourceText;
    id <IDEPlaygroundLoggerLogEntry> _topLevelLogEntry;
    NSString *_threadID;
}

@property(readonly, copy) NSString *threadID; // @synthesize threadID=_threadID;
@property(readonly) id <IDEPlaygroundLoggerLogEntry> topLevelLogEntry; // @synthesize topLevelLogEntry=_topLevelLogEntry;
@property(readonly, copy) NSString *fullLineSourceText; // @synthesize fullLineSourceText=_fullLineSourceText;
@property(readonly, copy) NSString *sourceText; // @synthesize sourceText=_sourceText;
@property(readonly) DVTTextDocumentLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResultDate:(id)arg1 location:(id)arg2 sourceCode:(id)arg3 topLevelLogEntry:(id)arg4 threadID:(id)arg5;

@end

