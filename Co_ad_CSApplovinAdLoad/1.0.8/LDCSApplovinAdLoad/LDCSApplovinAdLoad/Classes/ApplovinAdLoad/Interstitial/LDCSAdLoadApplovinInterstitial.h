//
//  LDCSAdLoadApplovinInterstitial.h
//  CSAdSDK_Example
//
//  Created by Zy on 2019/8/27.
//  Copyright © 2019 dengnengwei. All rights reserved.
//

#import <LDCSAdSDK/LDCSAdLoadInterstitial.h>
#import <AppLovinSDK/AppLovinSDK.h>
#import <LDCSAdSDK/LDCSAdLoadProtocol.h>
#import <LDCSAdSDK/LDCSAdLoadShowProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSAdLoadApplovinInterstitial : LDCSAdLoadInterstitial<LDCSAdLoadProtocol>
@property (nonatomic, strong) MAInterstitialAd *ad;

@end

NS_ASSUME_NONNULL_END
