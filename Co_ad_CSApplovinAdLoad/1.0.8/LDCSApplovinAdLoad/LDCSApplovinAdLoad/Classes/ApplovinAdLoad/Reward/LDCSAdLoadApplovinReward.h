//
//  LDCSAdLoadApplovinReward.h
//  CSAdSDK_Example
//
//  Created by Zy on 2019/9/2.
//  Copyright © 2019 dengnengwei. All rights reserved.
//

#import <LDCSAdSDK/LDCSAdLoadReward.h>
#import <AppLovinSDK/AppLovinSDK.h>
#import <LDCSAdSDK/LDCSAdLoadProtocol.h>
#import <LDCSAdSDK/LDCSAdLoadShowProtocol.h>
NS_ASSUME_NONNULL_BEGIN

@interface LDCSAdLoadApplovinReward : LDCSAdLoadReward<LDCSAdLoadProtocol>

@property (nonatomic, strong) MARewardedAd *ad;

@end

NS_ASSUME_NONNULL_END
