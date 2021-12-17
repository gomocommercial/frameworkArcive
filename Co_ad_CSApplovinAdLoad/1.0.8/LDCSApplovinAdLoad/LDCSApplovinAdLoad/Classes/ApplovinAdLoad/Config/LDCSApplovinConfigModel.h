//
//  LDCSApplovinConfigModel.h
//  LDCSApplovinAdLoad
//
//  Created by wlighting on 2021/12/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class LDCSAdLoadApplovinBanner;

@interface LDCSApplovinConfigModel : NSObject

@property (nonatomic, assign) NSInteger onlineadvtype;
@property (nonatomic, copy) NSString *moudleID;

//Banner
@property (nonatomic, assign) CGPoint bannerPosition;
@property (nonatomic, strong) UIViewController *rootViewController;
@property (nonatomic, copy) UIColor *backgroundColor;
//Banner
@property (nonatomic, weak) LDCSAdLoadApplovinBanner *banner;

@end

NS_ASSUME_NONNULL_END
