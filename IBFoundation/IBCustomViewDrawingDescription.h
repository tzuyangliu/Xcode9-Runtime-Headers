//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;
@protocol IBBinaryArchivableColor;

@interface IBCustomViewDrawingDescription : NSObject <IBBinaryArchiving>
{
    NSObject<IBBinaryArchivableColor> *_customViewDarkTexturedBorderColor;
    NSObject<IBBinaryArchivableColor> *_customViewDarkBorderColor;
    NSObject<IBBinaryArchivableColor> *_customViewLightBorderColor;
    NSObject<IBBinaryArchivableColor> *_containerCustomViewBackgroundColor;
    NSObject<IBBinaryArchivableColor> *_childlessCustomViewBackgroundColor;
    NSObject<IBBinaryArchivableColor> *_containerCustomViewTextColor;
    NSObject<IBBinaryArchivableColor> *_childlessCustomViewTextColor;
    double _borderThickness;
}

@property(nonatomic) double borderThickness; // @synthesize borderThickness=_borderThickness;
@property(retain, nonatomic) NSObject<IBBinaryArchivableColor> *childlessCustomViewTextColor; // @synthesize childlessCustomViewTextColor=_childlessCustomViewTextColor;
@property(retain, nonatomic) NSObject<IBBinaryArchivableColor> *containerCustomViewTextColor; // @synthesize containerCustomViewTextColor=_containerCustomViewTextColor;
@property(retain, nonatomic) NSObject<IBBinaryArchivableColor> *childlessCustomViewBackgroundColor; // @synthesize childlessCustomViewBackgroundColor=_childlessCustomViewBackgroundColor;
@property(retain, nonatomic) NSObject<IBBinaryArchivableColor> *containerCustomViewBackgroundColor; // @synthesize containerCustomViewBackgroundColor=_containerCustomViewBackgroundColor;
@property(retain, nonatomic) NSObject<IBBinaryArchivableColor> *customViewLightBorderColor; // @synthesize customViewLightBorderColor=_customViewLightBorderColor;
@property(retain, nonatomic) NSObject<IBBinaryArchivableColor> *customViewDarkBorderColor; // @synthesize customViewDarkBorderColor=_customViewDarkBorderColor;
@property(retain, nonatomic) NSObject<IBBinaryArchivableColor> *customViewDarkTexturedBorderColor; // @synthesize customViewDarkTexturedBorderColor=_customViewDarkTexturedBorderColor;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
