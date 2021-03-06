//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class IDEProvisioningUserAction, NSError, NSString;
@protocol IDERepairable;

@protocol IDEProvisioningMechanicDelegate <DVTInvalidation>
- (void)repairForRepairable:(id <IDERepairable>)arg1 userAction:(IDEProvisioningUserAction *)arg2 didFailWithError:(NSError *)arg3;
- (void)repairUserAction:(IDEProvisioningUserAction *)arg1 didFinishForRepairable:(id <IDERepairable>)arg2;
- (void)repairUserActionDidBeginForRepairable:(id <IDERepairable>)arg1;
- (void)repairForRepairable:(id <IDERepairable>)arg1 requiresUserAction:(IDEProvisioningUserAction *)arg2;
- (void)repairForRepairable:(id <IDERepairable>)arg1 didFailWithError:(NSError *)arg2;
- (void)repairDidFinishForRepairable:(id <IDERepairable>)arg1;
- (void)repairForRepairable:(id <IDERepairable>)arg1 isExecutingStep:(NSString *)arg2;
- (void)repairDidBeginForRepairable:(id <IDERepairable>)arg1;
- (void)repairPendingForRepairable:(id <IDERepairable>)arg1;
@end

