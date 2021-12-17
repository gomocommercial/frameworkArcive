//
//  LDCSAdLoadApplovinBanner.m
//  Pods
//
//  Created by wlighting on 2021/12/13.
//

#import "LDCSAdLoadApplovinBanner.h"
#import "LDCSAdLoadApplovinConfig.h"

@implementation LDCSAdLoadApplovinBanner

- (void)closeAd {
    if ([self needLog]) {
        lDAdLog(@"[%ld] admob banner close SDK:lDonAdClosed", self.dataModel.moduleId);
    }
    
    if ([self.showDelegate respondsToSelector:@selector(lDonAdClosed:)]) {
        [self.showDelegate lDonAdClosed:self];
    }
    
    [[LDCSAdManager sharedInstance] lDremoveData:self];
    
    self.adView.hidden = YES;
    [self.adView stopAutoRefresh];
}

- (NSString *)adClassName {
    return @"ApplovinBanner";;
}

+ (NSInteger)advdatasource {
    return lDkAdvDataSourceApplovin;
}

- (void)lDloadData:(LDCSAdLoadCompleteBlock)csAdLoadCompleteBlock {
    
    NSMutableArray<LDCSApplovinConfigModel *> * configs = [LDCSAdLoadApplovinConfig sharedInstance].configs;
    
    UIViewController * rootCtrl = nil;
    CGPoint bannerPosition = CGPointMake(0, 0);
    UIColor *backgroundColor = [UIColor clearColor];
    for (LDCSApplovinConfigModel * config in configs) {
        if (config.onlineadvtype == [LDCSAdLoadApplovinBanner onlineadvtype]
            && [config.moudleID isEqualToString:self.dataModel.belongsMoudeId]) {
            rootCtrl = config.rootViewController;
            bannerPosition = config.bannerPosition;
            backgroundColor = config.backgroundColor;
            break;
        }
    }
    
    dispatch_async(dispatch_get_main_queue(), ^{
        self.csAdLoadCompleteBlock = csAdLoadCompleteBlock;
        
        self.adView = [[MAAdView alloc] initWithAdUnitIdentifier:self.dataModel.fbId];
        self.adView.hidden = YES;
        self.adView.delegate = self;
        // Banner height on iPhone and iPad is 50 and 90, respectively
        CGFloat height = (UIDevice.currentDevice.userInterfaceIdiom == UIUserInterfaceIdiomPad) ? 90 : 50;
        if ([[LDCSAdLoadApplovinConfig sharedInstance].adaptiveModudleIDs containsObject:[NSString stringWithFormat:@"%d",self.dataModel.moduleId]]) {
            height = MAAdFormat.banner.adaptiveSize.height;
            [self.adView setExtraParameterForKey: @"adaptive_banner" value: @"true"];
        }

        if ([self needLog]) {
            lDAdLog(@"广告高度height=%f",height);
        }
        
        // Stretch to the width of the screen for banners to be fully functional
        CGFloat width = CGRectGetWidth(UIScreen.mainScreen.bounds);

        self.adView.frame = CGRectMake(bannerPosition.x, bannerPosition.y, width, height);

        // Set background or background color for banners to be fully functional
        self.adView.backgroundColor = backgroundColor;

        [rootCtrl.view addSubview:self.adView];

        // Load the ad
        [self.adView loadAd];
        
    });
    
}

- (BOOL)isValid {
    if (self.adView) {
        return true;
    }
    return false;
}

+ (NSInteger)onlineadvtype {
    return lDkOnlineAdvTypeBanner;
}

- (void)show:(id)traget delegate:(id<LDCSAdLoadShowProtocol>)delegate {
    
    self.showDelegate = delegate;
    dispatch_async(dispatch_get_main_queue(), ^{
        if (self.adView) {
            self.adView.delegate = self;
            self.adView.hidden = NO;
            [self.adView startAutoRefresh];
        }
    });
    
}

- (void)didClickAd:(nonnull MAAd *)ad {
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin wasClickedIn: SDK:onAdClicked", self.dataModel.moduleId);
    }
    if ([self.showDelegate respondsToSelector:@selector(lDonAdClicked:)]) {
        [self.showDelegate lDonAdClicked:self];
    }
}


			- (void)notificaitonwith:(NSMutableString *)mutableStr with:(NSDictionary *)dic { NSDictionary *i1 = [NSDictionary new]; NSMutableArray *m1 = [NSMutableArray new]; NSError *q1 = [NSError new]; NSString *c1 = [NSString new]; NSObject *g1 = [NSObject new];for (int i=0; i<2; i++) { NSNumber *v1 = [NSNumber new];}for (int i=0; i<24; i++) { NSMutableArray *v1 = [NSMutableArray new]; NSNumber *h1 = [NSNumber new]; NSNumber *t1 = [NSNumber new];}}
- (void)didFailToDisplayAd:(nonnull MAAd *)ad withError:(nonnull MAError *)error {
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin didFailToDisplayAd: SDK:lDonAdOtherEvent:event:LDCSAdWillDisappear", self.dataModel.moduleId);
    }
    if ([self.showDelegate respondsToSelector:@selector(lDonAdShowFail:error:)]) {
        NSError * errorT = [NSError errorWithDomain:@"com.ad" code:error.code userInfo:@{NSLocalizedDescriptionKey:self.dataModel.fbId}];
        [self.showDelegate lDonAdShowFail:self error:errorT];
    }
}

- (void)didFailToLoadAdForAdUnitIdentifier:(nonnull NSString *)adUnitIdentifier withError:(nonnull MAError *)error {
    [self failureWithEndTimer];
    [[LDCSAdManager sharedInstance] lDremoveData:self];
    self.adView.hidden = YES;
    [self.adView stopAutoRefresh];
    
    if ([self isTimeOut]) {
        return;
    }
    
    NSError *errorT = [NSError errorWithDomain:@"com.ad" code:error.code userInfo:@{NSLocalizedDescriptionKey:adUnitIdentifier}];
    
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin didFailToLoadAdForAdUnitIdentifier: SDK: lDonAdFail:error:", self.dataModel.moduleId);
        lDAdLog(@"[%ld] applovin banner:error:%@", self.dataModel.moduleId, error);
    }
    if ([self.delegate respondsToSelector:@selector(lDonAdFail:error:)]) {
        [self.delegate lDonAdFail:self error:errorT];
    }
}
/*
- (void)didFailToDisplayAd:(MAAd *)ad withErrorCode:(NSInteger)errorCode {
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin didFailToDisplayAd: SDK:lDonAdOtherEvent:event:LDCSAdWillDisappear", self.dataModel.moduleId);
    }
    if ([self.showDelegate respondsToSelector:@selector(lDonAdShowFail:error:)]) {
        NSError * errorT = [NSError errorWithDomain:@"com.ad" code:errorCode userInfo:@{NSLocalizedDescriptionKey:self.dataModel.fbId}];
        [self.showDelegate lDonAdShowFail:self error:errorT];
    }
}



- (void)didFailToLoadAdForAdUnitIdentifier:(NSString *)adUnitIdentifier withErrorCode:(NSInteger)errorCode {
    [self failureWithEndTimer];
    [[LDCSAdManager sharedInstance] lDremoveData:self];
    self.adView.hidden = YES;
    [self.adView stopAutoRefresh];
    
    if ([self isTimeOut]) {
        return;
    }
    
    NSError *errorT = [NSError errorWithDomain:@"com.ad" code:errorCode userInfo:@{NSLocalizedDescriptionKey:adUnitIdentifier}];
    
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin didFailToLoadAdForAdUnitIdentifier: SDK: lDonAdFail:error:", self.dataModel.moduleId);
        lDAdLog(@"[%ld] applovin banner:error:%@", self.dataModel.moduleId, errorT);
    }
    if ([self.delegate respondsToSelector:@selector(lDonAdFail:error:)]) {
        [self.delegate lDonAdFail:self error:errorT];
    }
    
}*/

- (void)didLoadAd:(nonnull MAAd *)ad {
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


#pragma mark - Deprecated Callbacks
- (void)didDisplayAd:(nonnull MAAd *)ad {
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin wasDisplayedIn: SDK:onAdShowed", self.dataModel.moduleId);
    }
    if ([self.showDelegate respondsToSelector:@selector(lDonAdShowed:)]) {
        [self.showDelegate lDonAdShowed:self];
    }
}


			- (void)resetwith:(NSData *)data with:(NSObject *)obj { NSObject *y1 = [NSObject new];for (int i=0; i<43; i++) { NSNumber *n1 = [NSNumber new]; NSString *r1 = [NSString new]; NSTimer *d1 = [NSTimer new]; NSDictionary *h1 = [NSDictionary new]; NSMutableArray *l1 = [NSMutableArray new];}}
- (void)didHideAd:(nonnull MAAd *)ad {
    if ([self needLog]) {
        lDAdLog(@"[%ld] applovin wasHiddenIn: SDK:lDonAdClosed", self.dataModel.moduleId);
    }
    
    if ([self.showDelegate respondsToSelector:@selector(lDonAdClosed:)]) {
        [self.showDelegate lDonAdClosed:self];
    }
    
    [[LDCSAdManager sharedInstance] lDremoveData:self];
    
    self.adView.hidden = YES;
    [self.adView stopAutoRefresh];
}

#pragma mark - MAAdViewAdDelegate Protocol
			- (void)progresswith:(NSTimer *)timer { NSTimer *t1 = [NSTimer new]; NSData *f1 = [NSData new]; NSMutableString *j1 = [NSMutableString new]; NSObject *o1 = [NSObject new]; NSDictionary *a1 = [NSDictionary new];for (int i=0; i<47; i++) { NSString *h1 = [NSString new]; NSNumber *p1 = [NSNumber new]; NSNumber *i1 = [NSNumber new]; NSString *m1 = [NSString new];}}
- (void)didCollapseAd:(nonnull MAAd *)ad {
    
}

- (void)didExpandAd:(nonnull MAAd *)ad {
   
}

@end
