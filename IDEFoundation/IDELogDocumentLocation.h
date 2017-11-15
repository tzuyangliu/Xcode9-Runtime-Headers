//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSIndexPath;

@interface IDELogDocumentLocation : DVTDocumentLocation
{
    NSIndexPath *_indexPath;
    BOOL _expandTranscript;
    struct _NSRange _characterRange;
}

@property(readonly) struct _NSRange characterRange; // @synthesize characterRange=_characterRange;
@property(readonly) BOOL expandTranscript; // @synthesize expandTranscript=_expandTranscript;
@property(readonly) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 indexPath:(id)arg3 expandTranscript:(BOOL)arg4;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 indexPath:(id)arg3 characterRange:(struct _NSRange)arg4;
- (id)_initWithDocumentURL:(id)arg1 timestamp:(id)arg2 indexPath:(id)arg3 expandTranscript:(BOOL)arg4 characterRange:(struct _NSRange)arg5;

@end

