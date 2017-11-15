//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTDispatchLock, DVTStackBacktrace, IDEEditorDocument, IDENavigableItem, IDEWorkspaceDocument, NSArray, NSImage, NSIndexSet, NSPointerArray, NSString, NSURL;
@protocol DVTTextReplacable;

@interface IDEEditorDocumentPreviewProvider : NSObject <DVTInvalidation>
{
    IDENavigableItem *_navigable;
    IDEEditorDocument<DVTTextReplacable> *_document;
    IDEEditorDocument<DVTTextReplacable> *_preview;
    double _branchTime;
    NSArray *_allResults;
    NSIndexSet *_replaceResultsIndexSet;
    NSString *_replacementString;
    NSArray *_documentLocations;
    NSArray *_previewLocations;
    NSPointerArray *_originalRowViewCache;
    NSPointerArray *_previewRowViewCache;
    NSURL *_url;
    DVTDispatchLock *_cacheLock;
    IDEWorkspaceDocument *_workspaceDocument;
    BOOL _disclosed;
}

+ (double)minimumRowHeight;
+ (void)initialize;
+ (id)performanceLogAspect;
+ (id)populationQueue;
@property BOOL disclosed; // @synthesize disclosed=_disclosed;
@property(retain) DVTDispatchLock *cacheLock; // @synthesize cacheLock=_cacheLock;
@property(copy, nonatomic) NSIndexSet *replaceResultsIndexSet; // @synthesize replaceResultsIndexSet=_replaceResultsIndexSet;
@property(retain, nonatomic) NSString *replacementString; // @synthesize replacementString=_replacementString;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(readonly) IDENavigableItem *batchFindNavigable; // @synthesize batchFindNavigable=_navigable;
- (void).cxx_destruct;
- (void)didReplaceFindResults;
- (void)willReplaceFindResults;
- (void)updateSelectedLocation:(id)arg1 forView:(id)arg2 atIndex:(long long)arg3 preview:(BOOL)arg4;
- (double)minimumHeightForRowAtIndex:(long long)arg1 withWidth:(double)arg2;
- (id)generateViewWithRect:(struct CGRect)arg1;
- (void)populateView:(id)arg1 forPreviewAtIndex:(long long)arg2;
- (void)populateView:(id)arg1 forDocumentAtIndex:(long long)arg2;
- (void)invalidatePreview;
- (void)setupPreview;
- (void)setupDocument;
- (void)updateReplacementsInPreview;
@property(readonly) NSArray *previewLocations;
@property(readonly) NSArray *originalLocations;
@property(readonly) NSArray *allResults;
@property(readonly) IDEEditorDocument<DVTTextReplacable> *preview; // @synthesize preview=_preview;
@property(readonly) IDEEditorDocument<DVTTextReplacable> *document; // @synthesize document=_document;
@property(readonly) long long rowCount;
- (void)primitiveInvalidate;
@property(readonly) NSImage *image;
@property(readonly) NSString *name;
- (id)initWithBatchFindGroupNavigableItem:(id)arg1 workspaceDocument:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

