//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceKitVariantDictionaryWrapper.h>

@class DVTTextDocumentLocation, NSNumber, NSString;

@interface IDESourceKitResponseDocumentLocation : IDESourceKitVariantDictionaryWrapper
{
}

@property(readonly) long long encoding;
@property(readonly) NSNumber *timeStamp;
@property(readonly) long long rangeCount;
@property(readonly) long long rangeLoc;
@property(readonly) long long endCol;
@property(readonly) long long endLine;
@property(readonly) long long startCol;
@property(readonly) long long startLine;
@property(readonly) NSString *url;
@property(readonly) DVTTextDocumentLocation *ide_documentLocationWithDocumentURLAndLineRange;
@property(readonly) DVTTextDocumentLocation *ide_documentLocation;

@end

