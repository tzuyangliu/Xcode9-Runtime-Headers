//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionStep.h>

@class NSString;

@interface IDEDistributionProcessingStep : IDEDistributionStep
{
}

+ (_Bool)runsPerThinningVariant;
+ (_Bool)runsPerDistributionItem;
+ (_Bool)supportsDryRun;
+ (id)providedOutputContextPropertyNames;
+ (id)requiredInputContextPropertyNames;
@property(readonly) NSString *name;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (_Bool)runWithError:(id *)arg1;
- (_Bool)shouldSkip;

@end
