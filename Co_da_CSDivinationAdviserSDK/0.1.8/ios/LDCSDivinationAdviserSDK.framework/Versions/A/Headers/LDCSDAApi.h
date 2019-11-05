//
// Created by matt on 2019-03-13.
// Copyright (c) 2019 cs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LDCSDAPaymentAndPicProtocol.h"
@class LDCSDAInitParams;
@class LDCSDATeacherModel;

@interface LDCSDAApi : NSObject

/*********************************SDK初始化及配置*****************************************/
/**
* 启动sdk, 在UIApplicationDelegate#didFinishLaunchingWithOptions里调用。
* 可重复调用，新配置会覆盖旧配置。没配置的参数，会使用默认配置，而不是上一次的配置。
* 推荐debug包，默认打开log配置，方便排查问题。
* @param params 初始化参数，appId,baseUrl,desKey必填，其它选填。
*/
+ (void)lDsetup:(LDCSDAInitParams *)params delegate:(id<LDCSDAPaymentAndPicProtocol>)delegate;

// 初始化
+ (instancetype)lDapiConfig;

@property (nonatomic,strong,readonly) NSString *lDuserId;
@property (nonatomic,strong,readonly) NSURL *lDavatorUrl;
@property (nonatomic,strong,readonly) NSString *lDnickName;
@property (nonatomic,strong,readonly) NSString *lDaccessToken;    //token
@property (nonatomic,assign,readonly) float lDbalance;//余额

+ (BOOL)isLogin;

// 获取老师推荐列表
- (void)lDgetMainAdvisorsWithCompletion:(void (^)(NSError *error,NSArray <LDCSDATeacherModel *>*teacherModelArr))completion;

// 充值上账
- (void)lDrechargeWithProductId:(NSString *)productId tran_id:(NSString *)tran_id Completion:(void (^)(NSError *error,float blance))completion;

// 游客账号自动登录
+ (void)lDautoLoginVisitorWithComplete:(void(^ _Nullable)(NSError * _Nullable error))complete;

// 验单失败
- (void)lDcheckPayReceiptFail:(NSError *)error;

@end
