//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionOption.h>

@interface IDEDistributionOptionThinning : IDEDistributionOption
{
}

+ (id)propertyListForContext:(id)arg1;
+ (id)eligibleDeviceFamiliesWithContext:(id)arg1 error:(id *)arg2;
+ (id)availableOptionsForPropertyList;
- (id)eligibleDeviceFamiliesWithError:(id *)arg1;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;

@end

