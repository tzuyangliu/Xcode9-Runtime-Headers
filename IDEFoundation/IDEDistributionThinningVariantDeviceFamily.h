//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionThinningVariant.h>

@class IDEIPAProcessorDeviceFamily, NSString;

@interface IDEDistributionThinningVariantDeviceFamily : IDEDistributionThinningVariant
{
    NSString *_fileNameSuffix;
    NSString *_displayName;
    IDEIPAProcessorDeviceFamily *_deviceFamily;
}

@property(readonly) IDEIPAProcessorDeviceFamily *deviceFamily; // @synthesize deviceFamily=_deviceFamily;
- (id)displayName;
- (id)fileNameSuffix;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDeviceFamily:(id)arg1 andUniqueDisplayName:(id)arg2;

@end
