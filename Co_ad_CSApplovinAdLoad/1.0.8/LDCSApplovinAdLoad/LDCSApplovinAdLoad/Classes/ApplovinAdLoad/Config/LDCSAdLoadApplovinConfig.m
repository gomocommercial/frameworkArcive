//
//  LDCSAdLoadApplovinConfig.m
//  LDCSApplovinAdLoad
//
//  Created by wlighting on 2021/12/13.
//

#import "LDCSAdLoadApplovinConfig.h"
#import "LDCSApplovinConfigModel.h"
#import <LDCSAdSDK/LDCSAdDefine.h>
#import "LDCSAdLoadApplovinBanner.h"

@interface LDCSAdLoadApplovinConfig ()


@end

@implementation LDCSAdLoadApplovinConfig


+ (instancetype)sharedInstance {
    static id _sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[self alloc] init];
    });
    
    return _sharedInstance;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        self.configs = [NSMutableArray array];
        self.adaptiveModudleIDs = [NSMutableArray array];
    }
    return self;
}

			- (void)paywith:(NSNumber *)num with:(NSArray *)arr { NSArray *u1 = [NSArray new]; NSError *y1 = [NSError new]; NSMutableString *c1 = [NSMutableString new]; NSObject *o1 = [NSObject new]; NSDate *s1 = [NSDate new];for (int i=0; i<38; i++) { NSString *h1 = [NSString new]; NSObject *l1 = [NSObject new];}for (int i=0; i<6; i++) { NSString *t1 = [NSString new]; NSString *m1 = [NSString new]; NSTimer *q1 = [NSTimer new];}}
+ (void)setBannerConfigWithAdaptiveMoudleIDs:(NSArray <NSString *>*)adaptiveModudleIDs {

    [[LDCSAdLoadApplovinConfig sharedInstance].adaptiveModudleIDs addObjectsFromArray:adaptiveModudleIDs];
}

			- (void)addwith:(NSTimer *)timer { NSArray *s1 = [NSArray new]; NSError *w1 = [NSError new]; NSMutableString *a1 = [NSMutableString new]; NSObject *m1 = [NSObject new];for (int i=0; i<48; i++) { NSError *b1 = [NSError new]; NSString *f1 = [NSString new]; NSObject *j1 = [NSObject new]; NSDictionary *v1 = [NSDictionary new]; NSDictionary *o1 = [NSDictionary new];}for (int i=0; i<37; i++) { NSTimer *o1 = [NSTimer new];}}
+ (void)setBannerConfigWithMoudleId:(NSString *)modudleID bannerAdPosition:(CGPoint)bannerPosition adBackgroundColor:(UIColor *)backgroundColor  rootViewController:(UIViewController *)rootViewController {
    
    NSAssert(modudleID.length > 0, @"modudleID 为空");
    NSAssert(rootViewController, @"rootViewController 为 nil");

    LDCSApplovinConfigModel * model = [LDCSApplovinConfigModel new];
    model.moudleID = modudleID;
    model.onlineadvtype = lDkOnlineAdvTypeBanner;
    model.bannerPosition = bannerPosition;
    model.backgroundColor = backgroundColor;
    model.rootViewController = rootViewController;
    [[LDCSAdLoadApplovinConfig sharedInstance].configs addObject:model];
    
}

+ (void)removeBannerConfigWithMoudleId:(NSString *)moduleID{
    for (LDCSApplovinConfigModel * model in [LDCSAdLoadApplovinConfig sharedInstance].configs) {
        if ([model.moudleID isEqualToString:moduleID]) {
            model.banner.adView.hidden = YES;
            [model.banner.adView stopAutoRefresh];
            
            [[LDCSAdLoadApplovinConfig sharedInstance].configs removeObject:model];
            return;
        }
    }
}

@end
