//
//  LDCSDAConfig.h
//  LDCSDivinationAdviserSDK
//
//  Created by Zy on 2019/9/18.
//

#import <Foundation/Foundation.h>
#import "LDCSDAPaymentAndPicProtocol.h"
@class LDCSDAProductModel;

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAConfig : NSObject

+ (instancetype)lDconfig;

@property (nonatomic, assign,getter=isEnableLog) BOOL enableLog;
@property (nonatomic, assign,getter=isTestMode) BOOL testMode;


@property (assign, nonatomic, readonly) NSInteger sdkVersionCode;
@property (strong, nonatomic, readonly) NSString *sdkVersionName;
@property (nonatomic,strong) NSArray <LDCSDAProductModel *>*productIdArr;

@property (nonatomic,weak) id<LDCSDAPaymentAndPicProtocol>delegate;

@property (nonatomic,copy) void(^rechargeBlock)(NSError * error,float balance);

/**
 * 是否sdk升级用户
 */
@property (assign, nonatomic) BOOL isSdkUpgrade;

/**
 * 应用appId
 */
@property (strong, nonatomic) NSString *appId;

/**
 * 网络请求链接baseUrl
 */
@property (strong, nonatomic) NSString *baseUrl;

/**
 * 加密解密desKey
 */
@property (strong, nonatomic) NSString *desKey;

/**
 * apiKey
 */
@property (strong, nonatomic) NSString *apiKey;

/**
 * 签名key，必传。
 */
@property (strong, nonatomic) NSString *signatureKey;



@end

NS_ASSUME_NONNULL_END
