//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionMethod.h>

@class DVTPlatform;

@interface IDEDistributionMethodAppStore : IDEDistributionMethod
{
}

- (id)shortTitle;
- (id)subtitle;
- (id)title;
- (id)distributionOptionIdentifiers;
@property(readonly) DVTPlatform *supportedPlatform;
- (BOOL)isAppStoreBound;
- (id)commandLineName;
- (id)commandLineNameForTask:(int)arg1;
- (id)orderedDistributionStepClassNamesForTask:(int)arg1;
- (id)orderedDistributionStepClassNames;
- (id)appStoreName;
- (id)exportStepName;
- (id)taskNoun;
- (id)taskVerb;

@end
