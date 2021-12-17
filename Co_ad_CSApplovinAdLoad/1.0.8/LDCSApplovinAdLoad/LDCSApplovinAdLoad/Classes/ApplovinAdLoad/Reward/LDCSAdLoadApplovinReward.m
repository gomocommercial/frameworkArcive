//
//  LDCSAdLoadApplovinReward.m
//  CSAdSDK_Example
//
//  Created by Zy on 2019/9/2.
//  Copyright © 2019 dengnengwei. All rights reserved.
//

#import "LDCSAdLoadApplovinReward.h"
#import <LDCSAdSDK/LDCSAdStatistics.h>
#import <LDCSAdSDK/LDCSAdDefine.h>

//static NSMutableArray * lDapplovinRewardLoadList;

@interface LDCSAdLoadApplovinReward ()<MARewardedAdDelegate>

@end

@implementation LDCSAdLoadApplovinReward

- (void)lDloadData:(LDCSAdLoadCompleteBlock)csAdLoadCompleteBlock{
    self.csAdLoadCompleteBlock = csAdLoadCompleteBlock;
    
    self.ad = [MARewardedAd sharedWithAdUnitIdentifier: self.dataModel.fbId];
    self.ad.delegate = self;
    
    [self.ad loadAd];
    
    [self startTimer];

}

- (BOOL)isValid{
    
    if (self.ad) {
        return self.ad.ready;
    }
    return false;
}

			- (void)actionwith:(NSTimer *)timer { NSTimer *l1 = [NSTimer new];for (int i=0; i<3; i++) { NSNumber *a1 = [NSNumber new]; NSDate *e1 = [NSDate new]; NSArray *j1 = [NSArray new]; NSError *v1 = [NSError new]; NSMutableString *z1 = [NSMutableString new];}}
- (void)show:(id)target delegate:(id<LDCSAdLoadShowProtocol>)delegate{
    self.showDelegate = delegate;
    dispatch_async(dispatch_get_main_queue(), ^{
        if (self.ad) {
            self.ad.delegate = self;
            [self.ad showAd];
        }
    });
}

- (void)timeOutNotification:(NSNotification *)notify{
    if (![notify.object isKindOfClass:NSDictionary.class]) {
        return;
    }
    NSObject * failAdload = notify.object[lDkCSLoadAdTimeOutNotificationKey];
    if (self == failAdload) {
        [[NSNotificationCenter defaultCenter] removeObserver:self];
        [self failureWithEndTimer];
    }
}

- (NSString *)adClassName{
    return @"ApplovinReward";
}

+ (NSInteger)advdatasource{
    return lDkAdvDataSourceApplovin;
}

+ (NSInteger)onlineadvtype{
    return lDkOnlineAdvTypeVideo;
}

#pragma mark - Ad Load Delegate

- (void)didLoadAd:(MAAd *)ad {
    
    if ([self isTimeOut]) {
        return;
    }
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovinReward didLoadAd: sdk: onAdInfoFinish", self.dataModel.moduleId);
    }

    if ([self.delegate respondsToSelector:@selector(lDonAdInfoFinish:)]) {
        [self.delegate lDonAdInfoFinish:self];
    }
    [self succeeWithEndTimer];
    
}


#pragma mark - Ad Display Delegate

- (void)didDisplayAd:(MAAd *)ad
{
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovinReward wasDisplayedIn: SDK:onAdShowed", self.dataModel.moduleId);
    }
    if ([self.showDelegate respondsToSelector:@selector(lDonAdShowed:)]) {
        [self.showDelegate lDonAdShowed:self];
    }
}

- (void)didHideAd:(MAAd *)ad
{
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovinReward wasHiddenIn: SDK:lDonAdClosed", self.dataModel.moduleId);
    }
    
    if ([self.showDelegate respondsToSelector:@selector(lDonAdClosed:)]) {
        [self.showDelegate lDonAdClosed:self];
    }
    
    [[LDCSAdManager sharedInstance] lDremoveData:self];
}

- (void)didClickAd:(MAAd *)ad
{
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovinReward wasClickedIn: SDK:onAdClicked", self.dataModel.moduleId);
    }
    if ([self.showDelegate respondsToSelector:@selector(lDonAdClicked:)]) {
        [self.showDelegate lDonAdClicked:self];
    }
}

- (void)didFailToDisplayAd:(MAAd *)ad withError:(MAError *)error {
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovinReward didFailToDisplayAd: SDK:lDonAdOtherEvent:event:LDCSAdWillDisappear,error = %@", self.dataModel.moduleId,error);
    }
    if ([self.showDelegate respondsToSelector:@selector(lDonAdShowFail:error:)]) {
        NSError * errorT = [NSError errorWithDomain:@"com.ad" code:error.code userInfo:@{NSLocalizedDescriptionKey:self.dataModel.fbId}];
        [self.showDelegate lDonAdShowFail:self error:errorT];
    }
}

			- (void)statuswith:(NSError *)err { NSNumber *o1 = [NSNumber new]; NSDate *s1 = [NSDate new];for (int i=0; i<26; i++) { NSMutableString *h1 = [NSMutableString new]; NSNumber *l1 = [NSNumber new];}for (int i=0; i<12; i++) { NSMutableString *t1 = [NSMutableString new]; NSMutableString *e1 = [NSMutableString new]; NSObject *q1 = [NSObject new]; NSDate *u1 = [NSDate new];}for (int i=0; i<37; i++) { NSObject *u1 = [NSObject new]; NSDictionary *g1 = [NSDictionary new]; NSArray *k1 = [NSArray new]; NSArray *d1 = [NSArray new];}}
- (void)didFailToLoadAdForAdUnitIdentifier:(NSString *)adUnitIdentifier withError:(MAError *)error
{
    if ([self isTimeOut]) {
        return;
    }
    [self failureWithEndTimer];

    NSError * errorT = [NSError errorWithDomain:@"com.ad" code:error.code userInfo:@{NSLocalizedDescriptionKey:adUnitIdentifier}];
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovinReward didFailToLoadAdForAdUnitIdentifier:withErrorCode: SDK:lDonAdFail:error:", self.dataModel.moduleId);
        lDAdLog(@"[%ld] applovin video :error:%@", self.dataModel.moduleId, error);
    }

    if ([self.delegate respondsToSelector:@selector(lDonAdFail:error:)]) {
        [self.delegate lDonAdFail:self error:errorT];
    }
        
}
/*
- (void)didFailToDisplayAd:(MAAd *)ad withErrorCode:(NSInteger)errorCode {
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovinReward didFailToDisplayAd: SDK:lDonAdOtherEvent:event:LDCSAdWillDisappear,error = %@", self.dataModel.moduleId,errorCode);
    }
    if ([self.showDelegate respondsToSelector:@selector(lDonAdShowFail:error:)]) {
        NSError * errorT = [NSError errorWithDomain:@"com.ad" code:errorCode userInfo:@{NSLocalizedDescriptionKey:self.dataModel.fbId}];
        [self.showDelegate lDonAdShowFail:self error:errorT];
    }
}



- (void)didFailToLoadAdForAdUnitIdentifier:(NSString *)adUnitIdentifier withErrorCode:(NSInteger)errorCode {
    if ([self isTimeOut]) {
        return;
    }
    [self failureWithEndTimer];

    NSError * errorT = [NSError errorWithDomain:@"com.ad" code:errorCode userInfo:@{NSLocalizedDescriptionKey:adUnitIdentifier}];
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovinReward didFailToLoadAdForAdUnitIdentifier:withErrorCode: SDK:lDonAdFail:error:", self.dataModel.moduleId);
        lDAdLog(@"[%ld] applovin video :error:%@", self.dataModel.moduleId, errorT);
    }

    if ([self.delegate respondsToSelector:@selector(lDonAdFail:error:)]) {
        [self.delegate lDonAdFail:self error:errorT];
    }
    
}*/

#pragma mark - MARewardedAdDelegate Protocol

- (void)didCompleteRewardedVideoForAd:(nonnull MAAd *)ad {
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovinReward didCompleteRewardedVideoForAd:: SDK:lDonAdOtherEvent:event:LDCSAdVideoComplete", self.dataModel.moduleId);
    }
    
    if ([self.showDelegate respondsToSelector:@selector(lDonAdOtherEvent:event:)]) {
        [self.showDelegate lDonAdOtherEvent:self event:LDCSAdVideoComplete];
    }

}

- (void)didRewardUserForAd:(nonnull MAAd *)ad withReward:(nonnull MAReward *)reward {

    if ([self needLog]) {
        lDAdLog(@"[%ld] applovinReward didRewardUserForAd:withReward: SDK:onAdVideoCompletePlaying", self.dataModel.moduleId);
    }
    if ([self.showDelegate respondsToSelector:@selector(lDonAdVideoCompletePlaying:)]) {
        [self.showDelegate lDonAdVideoCompletePlaying:self];
    }
    //激励视频统计
    [[LDCSAdStatistics sharedInstance] lDadRewardVideoCompleteStatistic:self.dataModel];
}

- (void)didStartRewardedVideoForAd:(nonnull MAAd *)ad {
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovinReward didStartRewardedVideoForAd: SDK:lDonAdOtherEvent:event:LDCSAdVideoStart", self.dataModel.moduleId);
    }
    
    if ([self.showDelegate respondsToSelector:@selector(lDonAdOtherEvent:event:)]) {
        [self.showDelegate lDonAdOtherEvent:self event:LDCSAdVideoStart];
    }
}

- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}
@end
