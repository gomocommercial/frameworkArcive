//
//  LDCSDAInitParams.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/9/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAInitParams : NSObject

/**
 * 应用AppId(请在Apple store connect 后台查看)，必传。
 */
@property (strong, nonatomic) NSString *appId;

/**
 * 网络请求链接baseUrl，必传。
 */
@property (strong, nonatomic) NSString *baseUrl;

/**
 * 加密解密desKey，必传。
 */
@property (strong, nonatomic) NSString *desKey;

/**
 * apiKey，必传。
 */
@property (strong, nonatomic) NSString *apiKey;

/**
 * 签名key，必传。
 */
@property (strong, nonatomic) NSString *signatureKey;

/**
 * 设置是否输出日志。默认NO，不输出。
 */
@property (assign, nonatomic) BOOL enableLog;

/**
 * 设置测试服。YES则测服，NO则正式服（默认）。
 */
@property (assign, nonatomic) BOOL testServer;


- (BOOL)lDcheckValid;

@end

NS_ASSUME_NONNULL_END
