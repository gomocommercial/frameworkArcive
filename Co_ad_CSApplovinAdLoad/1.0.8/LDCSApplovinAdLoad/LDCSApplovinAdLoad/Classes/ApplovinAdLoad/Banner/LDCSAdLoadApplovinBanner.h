//
//  LDCSAdLoadApplovinBanner.h
//  Pods
//
//  Created by wlighting on 2021/12/13.
//

#import <LDCSAdSDK/LDCSAdLoadBanner.h>
#import <AppLovinSDK/AppLovinSDK.h>
#import <LDCSAdSDK/LDCSAdLoadProtocol.h>
#import <LDCSAdSDK/LDCSAdLoadShowProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSAdLoadApplovinBanner : LDCSAdLoadBanner <LDCSAdLoadProtocol,MAAdViewAdDelegate>

@property (nonatomic, strong) MAAdView *adView;

/// 关闭广告(需要客户端关闭广告时主动调用)
- (void)closeAd;

@end

NS_ASSUME_NONNULL_END
