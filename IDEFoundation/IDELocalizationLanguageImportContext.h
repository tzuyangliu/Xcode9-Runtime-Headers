//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class IDEContainer, NSURL, NSXMLDocument;
@protocol IDELocalizedContainer;

@interface IDELocalizationLanguageImportContext : IDELocalizationWorkContext
{
    NSURL *_sourceUrl;
    IDEContainer<IDELocalizedContainer> *_container;
    NSXMLDocument *_importXLIFF;
}

+ (id)contextWithParent:(id)arg1 sourceUrl:(id)arg2 container:(id)arg3 importXLIFF:(id)arg4;
@property(retain) NSXMLDocument *importXLIFF; // @synthesize importXLIFF=_importXLIFF;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
@property(retain) NSURL *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end

