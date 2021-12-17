//
//  LDCSAdLoadApplovinConfig.h
//  LDCSApplovinAdLoad
//
//  Created by wlighting on 2021/12/13.
//

#import <Foundation/Foundation.h>
#import "LDCSApplovinConfigModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface LDCSAdLoadApplovinConfig : NSObject

@property (nonatomic, strong) NSMutableArray<LDCSApplovinConfigModel *> *configs;

@property (nonatomic, strong) NSMutableArray<NSString *> *adaptiveModudleIDs;

+ (instancetype)sharedInstance;

// MARK: - Banner配置(必须设置)
/// 设置Applovin Banner广告配置
/// @param modudleID 模块ID
/// @param bannerPosition Applovin Banner广告需要配置banner的位置，banner宽度为屏幕宽度，Banner height on iPhone and iPad is 50 and 90, respectively
/// @param rootViewController 此视图控制器用于在用户点击广告后呈现重叠式广告。通常应将其设置为包含Applovin Banner的视图控制器。
+ (void)setBannerConfigWithMoudleId:(NSString *)modudleID bannerAdPosition:(CGPoint)bannerPosition adBackgroundColor:(UIColor *)backgroundColor  rootViewController:(UIViewController *)rootViewController;

// MARK: - Adaptive Banner 配置(如果使用adaptive banner必须设置，未使用adaptive banner不需设置)
/// 设置聚合广告的模块id，（仅支持 AdMob and Google Ad Manager ）
/// @param adaptiveModudleIDs adaptive广告id数组(真实的模块id )
+ (void)setBannerConfigWithAdaptiveMoudleIDs:(NSArray <NSString *>*)adaptiveModudleIDs;

// MARK: -移除Banner配置(必须调用)
+ (void)removeBannerConfigWithMoudleId:(NSString *)modudleID;



@end

NS_ASSUME_NONNULL_END
