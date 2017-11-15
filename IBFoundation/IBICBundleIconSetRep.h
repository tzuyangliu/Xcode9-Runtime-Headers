//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAbstractImageRep.h>

@class IBICCatalogContentReference;

@interface IBICBundleIconSetRep : IBICSlottedAbstractImageRep
{
    IBICCatalogContentReference *_contentReference;
}

+ (id)assetRepWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(BOOL)arg3;
+ (id)assetRepWithRepIdentifier:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) IBICCatalogContentReference *contentReference; // @synthesize contentReference=_contentReference;
- (void).cxx_destruct;
- (BOOL)isMinimallyFitForCompiling;
- (BOOL)isImageDataSizedProperly;
- (id)infoPlistReferenceName;
- (void)setSlot:(id)arg1;
- (id)structuredIdentifier;
- (id)slot;
- (id)parent;
- (id)initWithSlot:(id)arg1;
- (BOOL)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;

@end

