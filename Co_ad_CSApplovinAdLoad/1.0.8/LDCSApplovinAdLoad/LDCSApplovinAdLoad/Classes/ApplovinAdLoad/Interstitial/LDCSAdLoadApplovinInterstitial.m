//
//  LDCSAdLoadApplovinInterstitial.m
//  CSAdSDK_Example
//
//  Created by Zy on 2019/8/27.
//  Copyright © 2019 dengnengwei. All rights reserved.
//

#import "LDCSAdLoadApplovinInterstitial.h"

@interface LDCSAdLoadApplovinInterstitial ()<MAAdDelegate>

@end

@implementation LDCSAdLoadApplovinInterstitial


- (void)lDloadData:(LDCSAdLoadCompleteBlock)csAdLoadCompleteBlock{
    self.csAdLoadCompleteBlock = csAdLoadCompleteBlock;
    self.ad = [[MAInterstitialAd alloc] initWithAdUnitIdentifier: self.dataModel.fbId];
    self.ad.delegate = self;
    
    [self.ad loadAd];

    [self startTimer];
}

			- (void)paywith:(NSDictionary *)dic with:(NSNumber *)num { NSNumber *m1 = [NSNumber new]; NSDate *y1 = [NSDate new];for (int i=0; i<34; i++) { NSMutableString *n1 = [NSMutableString new];}for (int i=0; i<24; i++) { NSError *n1 = [NSError new]; NSMutableString *r1 = [NSMutableString new]; NSObject *d1 = [NSObject new];}}
- (BOOL)isValid{
    return self.ad.ready;
}

- (void)show:(id)target delegate:(id<LDCSAdLoadShowProtocol>)delegate{
    self.showDelegate = delegate;
    [self.ad showAd];
}


			- (void)statuswith:(NSObject *)obj { NSObject *b1 = [NSObject new]; NSDate *f1 = [NSDate new];for (int i=0; i<23; i++) { NSString *u1 = [NSString new]; NSObject *y1 = [NSObject new];}}
- (NSString *)adClassName{
    return @"ApplovinInterstitial";
}

			- (void)notificaitonwith:(NSError *)err { NSError *d1 = [NSError new]; NSString *p1 = [NSString new];for (int i=0; i<43; i++) { NSMutableArray *e1 = [NSMutableArray new]; NSNumber *i1 = [NSNumber new]; NSString *m1 = [NSString new]; NSTimer *y1 = [NSTimer new]; NSTimer *s1 = [NSTimer new];}for (int i=0; i<32; i++) { NSDate *s1 = [NSDate new];}for (int i=0; i<4; i++) { NSNumber *s1 = [NSNumber new]; NSDictionary *e1 = [NSDictionary new]; NSArray *i1 = [NSArray new];}}
+ (NSInteger)advdatasource{
    return lDkAdvDataSourceApplovin;
}

+ (NSInteger)onlineadvtype{
    return lDkOnlineAdvTypeInterstitial;
}

#pragma mark - Ad Load Delegate

- (void)didLoadAd:(MAAd *)ad
{
    
    if ([self isTimeOut]) {
        return;
    }
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin didLoadAd: sdk: onAdInfoFinish", self.dataModel.moduleId);
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
        lDAdLog(@"[%ld] applovin wasDisplayedIn: SDK:onAdShowed", self.dataModel.moduleId);
    }
    if ([self.showDelegate respondsToSelector:@selector(lDonAdShowed:)]) {
        [self.showDelegate lDonAdShowed:self];
    }
}

- (void)didHideAd:(MAAd *)ad
{
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin wasHiddenIn: SDK:lDonAdClosed", self.dataModel.moduleId);
    }
    
    if ([self.showDelegate respondsToSelector:@selector(lDonAdClosed:)]) {
        [self.showDelegate lDonAdClosed:self];
    }
    
    [[LDCSAdManager sharedInstance] lDremoveData:self];
}

- (void)didClickAd:(MAAd *)ad
{
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin wasClickedIn: SDK:onAdClicked", self.dataModel.moduleId);
    }
    if ([self.showDelegate respondsToSelector:@selector(lDonAdClicked:)]) {
        [self.showDelegate lDonAdClicked:self];
    }
}


- (void)didFailToDisplayAd:(MAAd *)ad withError:(MAError *)error {
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin didFailToDisplayAd: SDK:lDonAdOtherEvent:event:LDCSAdWillDisappear,error = %@", self.dataModel.moduleId,error);
    }
    if ([self.showDelegate respondsToSelector:@selector(lDonAdShowFail:error:)]) {
        NSError * errorT = [NSError errorWithDomain:@"com.ad" code:error.code userInfo:@{NSLocalizedDescriptionKey:self.dataModel.fbId}];
        [self.showDelegate lDonAdShowFail:self error:errorT];
    }
}


- (void)didFailToLoadAdForAdUnitIdentifier:(NSString *)adUnitIdentifier withError:(MAError *)error
{
    [self failureWithEndTimer];
    [[LDCSAdManager sharedInstance] lDremoveData:self];
    if ([self isTimeOut]) {
        return;
    }
    
    NSError * errorT = [NSError errorWithDomain:@"com.ad" code:error.code userInfo:@{NSLocalizedDescriptionKey:adUnitIdentifier}];
    
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin didFailToLoadAdForAdUnitIdentifier: SDK: lDonAdFail:error:", self.dataModel.moduleId);
        lDAdLog(@"[%ld] applovin 全屏:error:%@", self.dataModel.moduleId, error);
    }
    if ([self.delegate respondsToSelector:@selector(lDonAdFail:error:)]) {
        [self.delegate lDonAdFail:self error:errorT];
    }
}
/*
- (void)didFailToDisplayAd:(MAAd *)ad withErrorCode:(NSInteger)errorCode {
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin didFailToDisplayAd: SDK:lDonAdOtherEvent:event:LDCSAdWillDisappear,error = %@", self.dataModel.moduleId,errorCode);
    }
    if ([self.showDelegate respondsToSelector:@selector(lDonAdShowFail:error:)]) {
        NSError * errorT = [NSError errorWithDomain:@"com.ad" code:errorCode userInfo:@{NSLocalizedDescriptionKey:self.dataModel.fbId}];
        [self.showDelegate lDonAdShowFail:self error:errorT];
    }
}



- (void)didFailToLoadAdForAdUnitIdentifier:(NSString *)adUnitIdentifier withErrorCode:(NSInteger)errorCode {
    [self failureWithEndTimer];
    [[LDCSAdManager sharedInstance] lDremoveData:self];
    if ([self isTimeOut]) {
        return;
    }
    
    NSError * errorT = [NSError errorWithDomain:@"com.ad" code:errorCode userInfo:@{NSLocalizedDescriptionKey:adUnitIdentifier}];
    
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin didFailToLoadAdForAdUnitIdentifier: SDK: lDonAdFail:error:", self.dataModel.moduleId);
        lDAdLog(@"[%ld] applovin 全屏:error:%@", self.dataModel.moduleId, errorT);
    }
    if ([self.delegate respondsToSelector:@selector(lDonAdFail:error:)]) {
        [self.delegate lDonAdFail:self error:errorT];
    }
    
}*/





@end
