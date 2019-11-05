//
// Created by matt on 2019-03-13.
// Copyright (c) 2019 cs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <LDCSDivinationAdviserSDK/LDCSDAHeader.h>

typedef void(^lDcompleteBlock)( NSDictionary * _Nullable result);
typedef void(^lDcompleteWithErrorBlock)(NSDictionary * _Nullable result, NSError * _Nullable error);

@interface LDCSDAHttpManager : NSObject

+ (instancetype _Nullable )lDshareManager;


- (void)lDrequestDivinationWithMethod:(NSString *)method
                                      url:(NSString *)urlStr
                                   params:(NSDictionary *)params moreQueryDic:(NSDictionary*)moreQueryDic timeoutInterval:(NSTimeInterval)timeoutInterval complete:(lDcompleteWithErrorBlock)complete;


#pragma mark ---网络变化监听---
/**
 开始网络监听
 */
+ (void)lDstartMonitoringNetworkChangeBlock:(void(^ _Nullable)(AFNetworkReachabilityStatus status))block;

/**
 关闭网络监听
 */
+ (void)lDstopMonitoring;

+ (NSString *_Nullable)networkType;

@end
