//
//  LDCSDAAccountManager.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/9/29.
//

#import <Foundation/Foundation.h>
@class LDCSDAUser;
NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAAccountManager : NSObject

+ (instancetype)shareManager;

@property (nonatomic,strong) LDCSDAUser *lDuser;

// APP启动时自动登录
+ (void)lDAutoLoginWhenAppStart;

// 是否已经登录
+ (BOOL)isLogin;

// 是否有足够的余额
+ (BOOL)hasEnoughBalance;

// 更新账户余额
- (void)lDupdateBalance;

// 更新账户余额
+ (void)refreshBalanceCompletion:(void(^)(float balance,BOOL success))completion;

// APP自动登录
+ (void)autoLoginVisitorWithComplete:(void(^ _Nullable)(NSError * _Nullable error))complete;

@end

NS_ASSUME_NONNULL_END
